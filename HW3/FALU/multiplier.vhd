----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:29:29 05/21/2022 
-- Design Name: 
-- Module Name:    multiplier - Behavioral 
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
use ieee.std_logic_unsigned.all; 

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multiplier is
    Port ( x : in  STD_LOGIC_VECTOR (15 downto 0);
           y : in  STD_LOGIC_VECTOR (15 downto 0);
           z : out  STD_LOGIC_VECTOR (15 downto 0));
end multiplier;

architecture Behavioral of multiplier is

begin
	process(x,y)
		variable xfraction : STD_LOGIC_VECTOR (7 downto 0);
		variable xexponent : STD_LOGIC_VECTOR (6 downto 0);
		variable xsign : STD_LOGIC;
		variable yfraction : STD_LOGIC_VECTOR (7 downto 0);
		variable yexponent : STD_LOGIC_VECTOR (6 downto 0);
		variable ysign : STD_LOGIC;
		variable zfraction : STD_LOGIC_VECTOR (7 downto 0);
		variable zexponent : STD_LOGIC_VECTOR (6 downto 0);
		variable zsign : STD_LOGIC;
		variable xx : STD_LOGIC;
		variable xy : STD_LOGIC_VECTOR (17 downto 0);
		variable exponentsum : STD_LOGIC_VECTOR (7 downto 0);
   begin
		xfraction := x(7 downto 0);
		xexponent := x(14 downto 8);
		xsign := x(15);
		yfraction := y(7 downto 0);
		yexponent := y(14 downto 8);
		ysign := y(15);
		xy := ('1' & xfraction) * ('1' & yfraction);
		if (xy(17)='1') then 
			zfraction := xy(16 downto 9) + xy(8); 
			xx := '1';
		else
			zfraction := xy(15 downto 8) + xy(7);
			xx := '0';
		end if;
		exponentsum := ('0' & xexponent) + ('0' & yexponent) + xx - 63;
		
		if (exponentsum(7)='1') then 
			if (exponentsum(6)='0') then
				zexponent := "1111111";
				zfraction := (others => '0');
				zsign := xsign xor ysign;
			else 			
				zexponent := (others => '0');
				zfraction := (others => '0');
				zsign := '0';
			end if;
		else								  	
			zexponent := exponentsum(6 downto 0);
			zsign := xsign xor ysign;
		end if;
		z(7 downto 0) <= zfraction;
		z(14 downto 8) <= zexponent;
		z(15) <= zsign;

   end process;

end Behavioral;

