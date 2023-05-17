----------------------------------------------------------------------------------

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity TLB is
    Port ( VirtualAddress : in  STD_LOGIC_VECTOR (15 downto 0);
           clock : in  STD_LOGIC;
           miss_hit : out  STD_LOGIC;
           PPNOut : out  STD_LOGIC_VECTOR (3 downto 0));
end TLB;

architecture FullyAssociative of TLB is
	signal pageOffset : std_logic_vector (6 downto 0);
	signal VPN : std_logic_vector (8 downto 0);
	type TLBdata is array (0 to 47) of std_logic_vector (13 downto 0); -- 1 bit Valid + 9 bit VPN +4 bit PPN
	signal controllerMisssOrHit : std_logic;
	signal tmpdata32_1 : std_logic_vector(31 downto 0);
	signal tmpdata32_2 : std_logic_vector(31 downto 0);
	signal PPN_out_tmp : std_logic_vector(3 downto 0);
	signal TLBmem : TLBdata := (0 => "11111111011011",1 => "10110111110101",2 => "11000101011111",3 => "10001010000001",
											4 => "11111100000001",5 => "10101111010110",6 => "11111101110010",7 => "11000101000111",
											8 =>"10101111001010", 9 => "10001101000110", 10 => "11000100111011",11 => "11000110101010",
											12 => "10001010101111",13 => "11110111110011",
											14 => "11000101111010",15 => "11000111010111",16 => "10101110011111",17 => "10001111110111",
											18 => "11010101010101",19 => "10101011010101",20 => "11101010000011",21 => "11101010101000",
											22 => "10101011101111",23 => "10011101101001",24 => "10010111111101",25 => "11100010111011",
											26 => "10101111110001",27 => "10101100111111",28 => "10111111111001",29 => "01100001011111",
											30 => "10111111100001",31 => "11000111100111",32 => "11111100011100",33 => "01110011110010",
											34 => "11001011101011",35 => "10001101111111",36 => "00110100110001",37 => "10110011100101",
											38 => "10111011010100",39 => "01011101010101",40 => "01011011110110",41 => "10011101111101",
											42 => "11011111010100",43 => "10101011101011",44 => "01111100110011",45 => "10110111000110",
											46 => "10101110101011",47 => "10111100011010");


begin
	VPN <= VirtualAddress(15 downto 7);
	pageOffset <= VirtualAddress(6 downto 0);
	controllerMisssOrHit <='0';
	mainMemory_In_TLB: entity work.mainMemory PORT MAP(outputData => tmpdata32_1 ,
																		outputData2 =>tmpdata32_2 ,
																		PPN => PPN_out_tmp ,
																		physicalAddressInput => "UUUUUUUUUUU" ,
																		virtualAddress => VirtualAddress  ,
																		clock => clock ,
																		controller => '1'  ,
																		cache_type => 'U' );
	process (clock , VirtualAddress)
	begin
		--if (rising_edge(clock)) then
			for i in 0 to 47 loop 
				if(TLBmem(i)(12 downto 4) = VPN and TLBmem(i)(13) = '1') then
					controllerMisssOrHit <='1';
					miss_hit <= '1';
					PPNOut <= PPN_out_tmp;
				end if;
			end loop;
			if(controllerMisssOrHit ='0') then
				miss_hit<='0';
				TLBmem(10)<='1' & VPN & PPN_out_tmp;
				PPNOut <=  PPN_out_tmp;
			end if;
		--end if;
		
	end process;
	
end FullyAssociative;


architecture FourwaySetAssociative of TLB is
-- 4 bit of 9 bit VPN --> index 
-- 5 bit of 9 bit VPN --> tag
-- 1 bit valid , 4 bit PPN
	signal pageOffset : std_logic_vector (6 downto 0);
	signal VPN : std_logic_vector (8 downto 0);
	signal Tag : std_logic_vector(4 downto 0);
	signal index : INTEGER;
							--set No    --each row in a set No
	type TLBdata is array (0 to 47) of std_logic_vector (13 downto 0); -- 1 bit Valid + 5 bit tag + 4 bit index  +4 bit PPN
	signal controllerMisssOrHit : std_logic;
	signal tmpdata32_1 : std_logic_vector(31 downto 0);
	signal tmpdata32_2 : std_logic_vector(31 downto 0);
	signal PPN_out_tmp : std_logic_vector(3 downto 0);
	signal indexMod12 : INTEGER;
	signal TLBmem : TLBdata := (0 => "11110100000110",1 => "10110100000101",2=> "11000100001111", 3 => "10001000000001",
											4 => "11111100010001",5 => "10101100010110",6 => "11111100010010",7 => "11000100010111",
											8 =>"10101100101010", 9 => "10001100100110", 10 => "11000100101011",11 => "11000100101010",
											12 => "10001000111111",13 => "11110100110011",14 => "11000100111010",15 => "11000100110111",
											16 => "10101101001111",17 => "10001101000111",18 => "11010101000101",19 => "10101001000101",
											20 => "11101001010011",21 => "11101001011000",22 => "10101001011111",23 => "10011101011001",
											24 => "10010101101101",25 => "11100001101011",26 => "10101101100001",27 => "10101101101111",
											28 => "10111101111001",29 => "01100001111111",30 => "10111101110001",31 => "11000101110111",
											32 => "11111110001100",33=> "01110010000010",34 => "11001010001011",35 => "10001110001111",
											36 => "00110110010001",37 => "10110010010101",38 => "10111010010100",39 => "01011110010101",
											40 => "01011010100110",41 => "10011110101101",42 => "11011110100100",43 => "10101010101011",
											44 => "01111110110011",45 => "10110110110110",46 => "10101110111011",47 => "10111110111010");
begin
	VPN <= VirtualAddress(15 downto 7);
	Tag <= VPN(8 downto 4);
	index <= to_integer(unsigned(VPN(3 downto 0))) ;
	pageOffset <= VirtualAddress(6 downto 0);
	controllerMisssOrHit <='0';
	mainmemory_in_tlb: entity work.mainmemory port map(outputdata => tmpdata32_1 ,
																		outputdata2 =>tmpdata32_2 ,
																		ppn => ppn_out_tmp ,
																		physicaladdressinput => "UUUUUUUUUUU" ,
																		virtualaddress => virtualaddress  ,
																		clock => clock ,
																		controller => '1'  ,
																		cache_type => 'U' );
	process (clock , VirtualAddress)
	begin
		if (rising_edge(clock)) then
			indexMod12<= (index * 4) mod 12 ;
			for i in 0 to 3 loop 
				if(TLBmem(indexMod12 + i)(12 downto 4) = VPN) then
					if( TLBmem(indexMod12 + i)(13) = '1') then
						controllerMisssOrHit <='1';
						miss_hit <= '1';
						PPNOut <=TLBmem(indexMod12 + i)(3 downto 0);
					end if;
				end if;
			end loop;
			if(controllerMisssOrHit ='0') then
				miss_hit<='0';
				TLBmem(indexMod12+ 0)(13)<= '1';
				TLBmem(indexMod12+ 0)(12 downto 4)<= VPN;
				TLBmem(indexMod12+ 0)(3 downto 0)<=PPN_out_tmp;
				PPNOut <=  PPN_out_tmp;
			end if;
		end if;
	end process;

end FourwaySetAssociative;
