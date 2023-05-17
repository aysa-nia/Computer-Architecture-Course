--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:37:32 06/04/2022
-- Design Name:   
-- Module Name:   E:/VHDL/HW4/5/FindPrime/FPTest.vhd
-- Project Name:  FindPrime
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FP
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
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY FPTest IS
END FPTest;
 
ARCHITECTURE behavior OF FPTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FP
    PORT(
         input : IN  std_logic_vector(9 downto 0);
         start : IN  std_logic;
         ans : OUT  std_logic_vector(9 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal input : std_logic_vector(9 downto 0) := (others => '0');
   signal start : std_logic := '0';

 	--Outputs
   signal ans : std_logic_vector(9 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
	signal clk : std_logic; 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FP PORT MAP (
          input => input,
          start => start,
          ans => ans
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk<= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

		input<="0000001111";
		start<='1';
      wait;
   end process;

END;
