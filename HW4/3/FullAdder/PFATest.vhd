--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:25:48 06/02/2022
-- Design Name:   
-- Module Name:   E:/VHDL/HW4/3/FullAdder/PFATest.vhd
-- Project Name:  FullAdder
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: PiplinedFullAdder
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
 
ENTITY PFATest IS
END PFATest;
 
ARCHITECTURE behavior OF PFATest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PiplinedFullAdder
    PORT(
         x : IN  std_logic_vector(3 downto 0);
         y : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         sum : OUT  std_logic_vector(3 downto 0);
         carry : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal x : std_logic_vector(3 downto 0) := (others => '0');
   signal y : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal sum : std_logic_vector(3 downto 0);
   signal carry : std_logic_vector(1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PiplinedFullAdder PORT MAP (
          x => x,
          y => y,
          clk => clk,
          sum => sum,
          carry => carry
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		x <= "0001";
		y <= "0010";
      wait;
   end process;

END;
