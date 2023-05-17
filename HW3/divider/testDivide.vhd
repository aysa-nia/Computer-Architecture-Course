--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:22:05 05/06/2022
-- Design Name:   
-- Module Name:   E:/VHDL/HW3/5_1/divider/testDivide.vhd
-- Project Name:  divider
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: optimizedDivision
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
use IEEE.numeric_std.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testDivide IS
END testDivide;
 
ARCHITECTURE behavior OF testDivide IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT optimizedDivision
    PORT(
         divisor : IN  signed(31 downto 0);
         dividend : IN  signed(31 downto 0);
         q_out : OUT  signed(31 downto 0);
         rem_out : OUT  signed(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal divisor : signed(31 downto 0) := (others => '0');
   signal dividend :signed(31 downto 0) := (others => '0');

 	--Outputs
   signal q_out : signed(31 downto 0);
   signal rem_out : signed(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
	signal clk : std_logic; 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: optimizedDivision PORT MAP (
          divisor => divisor,
          dividend => dividend,
          q_out => q_out,
          rem_out => rem_out
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
   stim_proc : process
	begin
		wait for 100 ns;
		divisor <= "00000000000000000000000000000011";
		dividend <= "11111111111111111111111111110101";
		wait;
	end process;

END;
