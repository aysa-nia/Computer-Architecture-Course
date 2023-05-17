--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:54:40 06/20/2022
-- Design Name:   
-- Module Name:   E:/VHDL/HW5/miss-hit-logic/Miss_hit_test.vhd
-- Project Name:  miss-hit-logic
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Miss_Hit
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
 
ENTITY Miss_hit_test IS
END Miss_hit_test;
 
ARCHITECTURE behavior OF Miss_hit_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Miss_Hit
    PORT(
         tag : IN  std_logic_vector(3 downto 0);
         w0 : IN  std_logic_vector(4 downto 0);
         w1 : IN  std_logic_vector(4 downto 0);
         hit : OUT  std_logic;
         w0_valid : OUT  std_logic;
         w1_valid : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal tag : std_logic_vector(3 downto 0) := (others => '0');
   signal w0 : std_logic_vector(4 downto 0) := (others => '0');
   signal w1 : std_logic_vector(4 downto 0) := (others => '0');

 	--Outputs
   signal hit : std_logic;
   signal w0_valid : std_logic;
   signal w1_valid : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
	signal clk : std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Miss_Hit PORT MAP (
          tag => tag,
          w0 => w0,
          w1 => w1,
          hit => hit,
          w0_valid => w0_valid,
          w1_valid => w1_valid
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
		tag<="0100";
		w0<="10111";
		w1<="10100";
      wait;
   end process;

END;
