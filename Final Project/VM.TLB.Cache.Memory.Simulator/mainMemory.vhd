----------------------------------------------------------------------------------

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
USE ieee.std_logic_unsigned.all;

-- 

entity mainMemory is
    Port ( outputData : out  STD_LOGIC_VECTOR (31 downto 0);
           outputData2 : out  STD_LOGIC_VECTOR (31 downto 0);
           PPN : out  STD_LOGIC_VECTOR (3 downto 0);
           physicalAddressInput : in  STD_LOGIC_VECTOR (10 downto 0);
           virtualAddress : in  STD_LOGIC_VECTOR (15 downto 0); -- 9 bit for VPN, 7 bit for page offset
			  clock : in STD_LOGIC;
			  controller : in STD_LOGIC; -- if 1 -> page table
														-- else -> data memory
			  cache_type : in STD_LOGIC); -- if 1 -> two way
end mainMemory;										-- 0 -> direct

architecture Behavioral of mainMemory is
	-- for 64X 512 word
	type dataMemory_type is array (0 to 384) of std_logic_vector (31 downto 0); --1536 byte= 12288 bit --> 12288/32 = 384
	type pageTable_type is array (0 to 511) of std_logic_vector (4 downto 0); -- 4bit PPN, 1bit Valid
	signal VPN : std_logic_vector (8 downto 0);
	signal dataMemory : dataMemory_type:= (others => (others => 'U'));
	signal pageTable : pageTable_type:= (others => (others => 'U'));
	signal tmpPhysicalAddressOut : STD_LOGIC_VECTOR (10 downto 0);
	signal tmpoutputData : STD_LOGIC_VECTOR (63 downto 0);
	signal pageoffset : std_logic_vector(6 downto 0);
begin
	VPN <= virtualAddress(15 downto 7);
	pageoffset<= virtualAddress(6 downto 0);
	HardDiskPageTable: entity  work.HardDisk PORT MAP(	VirtualAddress =>  virtualAddress,
																		PhysicalAddressOut =>tmpPhysicalAddressOut,
																		outputData => tmpoutputData,
																		cache_type=> cache_type,
																		clock =>  clock);
	
	process(clock)
	begin
	if (rising_edge(clock)) then
		if (controller = '0') then
			PPN <= "UUUU";
			if (cache_type = '1') then 
				outputData <= dataMemory(to_integer(unsigned(physicalAddressInput)));
				outputData2 <= "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU";
			else
				outputData <= dataMemory(to_integer(unsigned(physicalAddressInput)));
																	-- (tag   + index)                          +   wordOffset                 +  byteoffset
				outputData2 <= dataMemory(to_integer(unsigned(physicalAddressInput(10 downto 3) + not physicalAddressInput(2) + physicalAddressInput(1 downto 0))));
			end if;
		else
			if ( pageTable(to_integer(unsigned(VPN))) = "UUUUU" or pageTable(to_integer(unsigned(VPN)))(4) = '0') then
				PPN<= tmpPhysicalAddressOut(10 downto 7);
				pageTable(to_integer(unsigned(VPN)))<= '1' & tmpPhysicalAddressOut(10 downto 7);
				dataMemory(to_integer(unsigned(tmpPhysicalAddressOut))) <= tmpoutputData(31 downto 0);
			else
				PPN <= pageTable(to_integer(unsigned(VPN)))(3 downto 0);
			end if;
		end if;	
	end if;
end process;
	
end Behavioral;

