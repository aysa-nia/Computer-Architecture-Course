----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:43:44 06/20/2022 
-- Design Name: 
-- Module Name:    Miss_Hit - Behavioral 
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Miss_Hit is
	port( tag : in std_logic_vector(3 downto 0);
			w0 : in std_logic_vector(4 downto 0);
			w1 : in std_logic_vector(4 downto 0);
			hit : out std_logic;
			w0_valid : out std_logic ;
			w1_valid : out std_logic);
end Miss_Hit;

architecture Behavioral of Miss_Hit is

begin
process(tag , w0 , w1)
begin
	if('1' & tag = w0) or ('1' & tag = w1) then
		hit<= '1';
	else
		hit<='0';
	end if;
	if '1' & tag = w0 then
		w0_valid <= '1';
	else 
		w0_valid<='0';
	end if;
	if '1' & tag = w1 then
		w1_valid <= '1';
	else 
		w1_valid<='0';
	end if;
end process;
end Behavioral;

