----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:17:10 05/20/2022 
-- Design Name: 
-- Module Name:    adder - Behavioral 
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
--use IEEE.STD_LOGIC_ARITH.ALL;
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity adder is
    Port ( x : in  STD_LOGIC_VECTOR (15 downto 0);
           y : in  STD_LOGIC_VECTOR(15 downto 0);
           z : out  STD_LOGIC_VECTOR(15 downto 0)
			  );
end adder;

architecture Behavioral of adder is

begin
	process(x,y)
		variable xfraction : STD_LOGIC_VECTOR (7 downto 0);
		variable xexponent : STD_LOGIC_VECTOR (6 downto 0);
		variable xsign : STD_LOGIC;
		variable yfraction : STD_LOGIC_VECTOR (7 downto 0);
		variable yexponent : STD_LOGIC_VECTOR (6 downto 0);
		variable ysign : STD_LOGIC;
		variable exponentdiff : STD_LOGIC_VECTOR (7 downto 0);
		variable Afraction  : STD_LOGIC_VECTOR (7 downto 0);
		variable Bfraction  : STD_LOGIC_VECTOR (7 downto 0);
		variable Cexponent : STD_LOGIC_VECTOR (6 downto 0);
		variable SBfraction  : STD_LOGIC_VECTOR (7 downto 0);
		variable fractionsum  : STD_LOGIC_VECTOR (7 downto 0);

   begin
		xfraction := x(7 downto 0);
		xexponent := x(14 downto 8);
		xsign := x(15);
		yfraction := y(7 downto 0);
		yexponent := y(14 downto 8);
		ysign := y(15);
		
		exponentdiff := ('0' & xexponent) - ('0' & yexponent);
		if (exponentdiff(7) = '1') then
			exponentdiff := not exponentdiff + 1;
			Afraction := yfraction;
			Bfraction := xfraction;
			Cexponent := yexponent;
		else
			Afraction := xfraction;
			Bfraction := yfraction;
			Cexponent := xexponent;
		end if;
		
		SBfraction := SHR('1'& Bfraction , exponentdiff);		
		fractionsum := Afraction + SBfraction;							
		z(7 downto 0) <= fractionsum;
		z(14 downto 8) <= Cexponent;
		z(15) <= '0';
	
   end process;
end Behavioral;

