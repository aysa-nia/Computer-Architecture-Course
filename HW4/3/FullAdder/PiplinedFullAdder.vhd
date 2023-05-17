----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:54:33 06/02/2022 
-- Design Name: 
-- Module Name:    PiplinedFullAdder - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity PiplinedFullAdder is
	port (x : in std_logic_vector(3 downto 0);
			y : in std_logic_vector(3 downto 0);
			clk : in  std_logic;
			sum : out std_logic_vector(3 downto 0);
			carry : out std_logic_vector(1 downto 0));
		
end PiplinedFullAdder;

architecture Behavioral of PiplinedFullAdder is
	signal x1 : std_logic_vector(1 downto 0);
	signal y1 : std_logic_vector(1 downto 0);
	signal s1 : std_logic_vector(1 downto 0);
	signal r1 : std_logic_vector(2 downto 0);
	signal x2 : std_logic_vector(1 downto 0);
	signal y2 : std_logic_vector(1 downto 0);
	signal s2 : std_logic_vector(1 downto 0);
	signal r2 : std_logic_vector(1 downto 0);	
begin
	process
	begin
	wait until clk = '1';
	x1<= x(1 downto 0);
	y1<= y(1 downto 0);
	x2<= x(3 downto 2);
	y2<= y(3 downto 2);
	r1<= ('0' & x1) + ('0' & y1);
	r2 <= x2 + y2;
	s1<=r1(1 downto 0);
	s2<=r1(2) + r2;
	end process;
	carry<=r1(1 downto 0);
	sum<= s2 & s1;

end Behavioral;

