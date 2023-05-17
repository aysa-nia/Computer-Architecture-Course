----------------------------------------------------------------------------------

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

-- 5 bit index
-- 3 bit tag
-- 1 bit word offset
-- 2 bit byte offset
-- array 32
entity Cach is
    Port ( physicalAddress : in  STD_LOGIC_VECTOR (10 downto 0);
--           data32 : in  STD_LOGIC_VECTOR (31 downto 0);
           miss_hit : out  STD_LOGIC;
           clock : in  STD_LOGIC;
--           data64 : in  STD_LOGIC_VECTOR (63 downto 0);
           output32 : out  STD_LOGIC_VECTOR (31 downto 0);
           output64 : out  STD_LOGIC_VECTOR (63 downto 0));
end Cach;

architecture Direct of Cach is
	signal index : std_logic_vector (4 downto 0);
	signal tag : std_logic_vector (2 downto 0);
	signal word_offset : std_logic;
	signal byteOffset : std_logic_vector (1 downto 0);
	-- direct --> 64, two way --> 32
	--65th bit is for validity
	type dataArray is array (0 to 31) of std_logic_vector (72 downto 0); --1 bit valid + 3bit tag + 5 bit index + 64 bit data
	signal buffermem : dataArray := (others => (others => '0'));
	signal tmpPPN : std_logic_vector(3 downto 0);
	signal TagIndex : std_logic_vector(7 downto 0);
	signal controll_missOrhit : std_logic;
	signal tmpdata64_1 : std_logic_vector(31 downto 0);
	signal tmpdata64_2 : std_logic_vector(31 downto 0);
begin
	index <=  physicalAddress( 6 downto 2);
	tag <= physicalAddress(9 downto 7);
	word_offset <= physicalAddress(2);
	byteOffset <= physicalAddress(1 downto 0);
	TagIndex <= tag & index;
	controll_missOrhit<= '0';
	mainMemoryComponent: entity  work.mainMemory PORT MAP(   outputData => tmpdata64_1,
																				outputData2 => tmpdata64_2,
																				PPN => tmpPPN,
																				physicalAddressInput => physicalAddress,
																				virtualAddress => "UUUUUUUUUUUUUUUU",
																				clock => clock,
																				controller => '0',
																				cache_type => '0'
																			);
	process (clock)
	begin
		if (rising_edge(clock)) then
			for i in 0 to 31 loop
				if ( buffermem(i)(71 downto 64) = TagIndex) then
					if(buffermem(i)(72) = '1') then
						controll_missOrhit<='1';
						miss_hit <= '1';
						output64<= buffermem(i)(63 downto 0);
						output64<=tmpdata64_2 & tmpdata64_1;
					end if;
				end if;
			end loop;
			if(controll_missOrhit = '0') then
					buffermem(10)(31 downto 0)<= tmpdata64_1;
					buffermem(10)(63 downto 32)<= tmpdata64_2;
					miss_hit<='0';
					buffermem(10)(72) <= '1';
					output64<=tmpdata64_2 & tmpdata64_1;
			end if;
		end if;
	end process;
end Direct;

-- 32 / 2 = 16 (2^4) -> 4 bit for index
-- 2 bit byteoffset?
-- 5 bit tag

architecture TwoWaySetAssociative of Cach is
	signal tag : std_logic_vector (4 downto 0);
	signal byteOffset : std_logic_vector (1 downto 0);
	signal index : std_logic_vector (3 downto 0);
	-- 32th is valid
	type dataArray is array (0 to 15) of std_logic_vector (41 downto 0); --1 bit valid +5 bit tag + 4 bit index + 32 bit data
	signal buffermem : dataArray := (others => (others => '0'));
	signal tmpPPN : std_logic_vector(3 downto 0);
	signal tmpOut64 : std_logic_vector(31 downto 0);
	signal TagIndex : std_logic_vector(8 downto 0);
	signal controll_missOrhit : std_logic ;
	signal tmpdata32 : std_logic_vector(31 downto 0);
begin
	byteOffset <= physicalAddress	(1 downto 0);
	index <= physicalAddress(5 downto 2);
	tag <= physicalAddress(10 downto 6);
	TagIndex <= tag & index;
	controll_missOrhit<='0';
	mainmemorytwoway: entity work.mainmemory port map(		 	outputdata => tmpdata32,
																				outputdata2 => tmpout64,
																				ppn => tmpppn,
																				physicaladdressinput => physicaladdress,
																				virtualaddress => "UUUUUUUUUUUUUUUU",
																				clock => clock,
																				controller => '0',
																				cache_type => '1');
	process (clock)
	begin
		if (rising_edge(clock)) then
			for i in 0 to 15 loop
				if ( buffermem(i)(40 downto 32) = TagIndex) then
					if(buffermem(i)(41) = '1') then
						controll_missOrhit<='1';
						miss_hit <= '1';
						output32<= buffermem(i)(31 downto 0);
						output32<= tmpdata32;
					end if;
				end if;
			end loop;
			if(controll_missOrhit = '0') then
					buffermem(10)(31 downto 0)<= tmpdata32;
					miss_hit<= '0';
					buffermem(10)(41) <= '1';
					output32<= tmpdata32 ;
			end if;
		end if;
	end process;
end TwoWaySetAssociative;

