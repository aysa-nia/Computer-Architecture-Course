----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:52:31 05/03/2022 
-- Design Name: 
-- Module Name:    multiplier8bit6bit - Behavioral 
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
--USE ieee.std_logic_arith.all;
use ieee.numeric_std.all;
USE ieee.std_logic_unsigned.all;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity multiplier8bit6bit is
    Port ( a : in  std_logic_vector (7 downto 0);
           b : in  std_logic_vector(5 downto 0);
           c : out  std_logic_vector (15 downto 0));
end multiplier8bit6bit;

architecture Behavioral of multiplier8bit6bit is
	
begin
	process(a,b)
	variable a_2 : std_logic_vector(15 downto 0);
	variable b_2 : std_logic_vector(7 downto 0);
	variable pa : std_logic_vector(15 downto 0);
	variable zero : std_logic_vector(7 downto 0);
	variable temp : std_logic_vector (15 downto 0);
	variable sign : std_logic;
	begin
	zero:=(others=>'0');
	pa :=(others=>'0');
	sign:=a(7) xor b(5);
	if a(7) = '0' then
		a_2:=zero & a;
	else 
		a_2:= std_logic_vector(resize((-1)*signed(a),16));
	end if;
	if b(5) = '0' then
		b_2:= "00"& b;
	else 
		b_2:= std_logic_vector((-1)*signed(b));
	end if;
	for i in 0 to 5 loop
		if b(i) = '1' then
			pa := pa + a_2;
		end if;
		--ba(ba'left-1 downto 0) <= ba(ba'left-2 downto 0) & '0';
		a_2 := a_2(14 downto 0) & '0';
		--ba<= temp;
	end loop;
	if(sign='1') then
		pa:=pa-pa-pa;
	else
		pa:= pa;
	end if;
	c<= pa;
	end process;
end Behavioral;

