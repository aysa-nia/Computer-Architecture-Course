----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:38:18 06/02/2022 
-- Design Name: 
-- Module Name:    RegisterFile - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.std_logic_1164.ALL;
use ieee.numeric_std.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RegisterFile is
	port (write_enable : in std_logic;
			clk : in std_logic;
			reset : in std_logic;
			writeport : IN std_logic_vector(31 DOWNTO 0); -- register input
			adrwport : IN std_logic_vector(4 DOWNTO 0);-- address write
			adrport0 : IN std_logic_vector(4 DOWNTO 0);-- address port 0
			adrport1 : IN std_logic_vector(4 DOWNTO 0);-- address port 1
			readport0 : OUT std_logic_vector(31 DOWNTO 0); -- output port 0
			readport1 : OUT std_logic_vector(31 DOWNTO 0)); -- output port 1	
end RegisterFile;

architecture Behavioral of RegisterFile is
	SUBTYPE word_type IS std_logic_vector(31 DOWNTO 0); -- reg word TYPE
	TYPE storage_type IS ARRAY(0 TO 4) OF word_type; -- reg array TYPE
	SIGNAL registerfile : storage_type; -- reg file contents
begin
	process(clk , reset)
	begin
		if reset = '0' then
			for i in 0 to 4 loop
				registerfile(i) <= (others=>'0');
			end loop;
		ELSIF rising_edge(clk) then
			if write_enable = '1' then 
				registerfile(to_integer(unsigned(adrwport))) <= writeport;
			end if;
		end if;
	end process;
	readport0 <= registerfile(to_integer(unsigned(adrport0)));
	readport1 <= registerfile(to_integer(unsigned(adrport1)));
end Behavioral;

