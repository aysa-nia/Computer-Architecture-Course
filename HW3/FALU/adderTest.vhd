--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:35:56 05/20/2022
-- Design Name:   
-- Module Name:   E:/VHDL/HW3/6/FALU/adderTest.vhd
-- Project Name:  FALU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: adder
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
 
ENTITY adderTest IS
END adderTest;
 
ARCHITECTURE behavior OF adderTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT adder
    PORT(
         x : IN  std_logic_vector(15 downto 0);
         y : IN  std_logic_vector(15 downto 0);
         z : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal x : std_logic_vector(15 downto 0) := (others => '0');
   signal y : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal z : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
   constant clk_period : time := 10 ns;
	signal clk : std_logic; 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: adder PORT MAP (
          x => x,
          y => y,
          z => z
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
		x <= "0000000111000000";
		y <= "0000000000011100";
--		b <= "111111";
--		a <= "00000010";
		wait;
	end process;

END;
