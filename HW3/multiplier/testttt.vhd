--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:42:26 05/04/2022
-- Design Name:   
-- Module Name:   E:/VHDL/HW3/4_2/multiplier/multiplier/testttt.vhd
-- Project Name:  multiplier
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multiplier8bit6bit
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE ieee.std_logic_arith.all;
use ieee.numeric_std;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testttt IS
END testttt;
 
ARCHITECTURE behavior OF testttt IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT multiplier8bit6bit
    PORT(
         a : IN  std_logic_vector(7 downto 0);
         b : IN  std_logic_vector(5 downto 0);
         c : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(7 downto 0) := (others => '0');
   signal b : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal c : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
	signal clk : std_logic; 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: multiplier8bit6bit PORT MAP (
          a => a,
          b => b,
          c => c
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk<= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   stim_proc : process
	begin
		wait for 100 ns;
		b <= "000110";
		a <= "00000111";
--		b <= "111111";
--		a <= "00000010";
		wait;
	end process;
END;
