----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:13:18 05/03/2022 
-- Design Name: 
-- Module Name:    optimizedDivision - Behavioral 
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

entity optimizedDivision is
    Port ( divisor : in  signed(31 downto 0);
           dividend: in  signed(31 downto 0);
           q_out : out signed(31 downto 0);
           rem_out : out signed(31 downto 0));
end optimizedDivision;

architecture Behavioral of optimizedDivision is
begin
	process(dividend , divisor )
	--variable Q : unsigned(31 downto 0);
	variable M: unsigned(31 downto 0) ;
	--variable A: unsigned(31 downto 0) ;
	variable AQ: unsigned(63 downto 0) ;
	alias A: unsigned(31 downto 0) is AQ(63 downto 32);
	alias Q: unsigned(31 downto 0) is AQ(31 downto 0);
	variable Signdivisor : boolean;
	variable Signdividend : boolean;
	begin
	if(divisor(31)='1') then
		M := unsigned(-divisor);
		Signdivisor := true;
	else
		M := unsigned(divisor);
		Signdivisor := false;
	end if;
	if(dividend(31)='1') then
		Q := unsigned(-dividend);
		Signdividend := true;
	else
		Q := unsigned(dividend);
		Signdividend := false;
	end if;
--		Q:= dividend;
--		M :=divisor;
		A :=(others=>'0');
--		AQ := A & Q;
		for i in 1 to 32 loop
			AQ:= AQ(62 downto 0) & '0';
			A:= A - M;
			if(A(31) = '0') then
				Q(0) := '1';
			else 
				Q(0):='0';
				A:= A + M;
			end if;
		end loop;
		if (Signdividend=true and Signdivisor = true) then
			q_out <= signed(Q);
			rem_out  <= -signed(A);
		elsif (Signdividend=true and Signdivisor = false) then
			q_out <= -signed(Q);
			rem_out  <= -signed(A);
		elsif (Signdividend=false and Signdivisor = true) then
			q_out <= -signed(Q);
			rem_out  <= signed(A);
		elsif (Signdividend=false and Signdivisor = false) then
			q_out <= signed(Q);
			rem_out  <= signed(A);
		end if;
	end process;
end Behavioral;

