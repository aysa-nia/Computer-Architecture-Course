--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:05:29 07/09/2022
-- Design Name:   
-- Module Name:   E:/VHDL/Project/FinalProject/VM.TLB.Cache.Memory.Simulator/FinalTest.vhd
-- Project Name:  VM.TLB.Cache.Memory.Simulator
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: AllInOne
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
 
ENTITY FinalTest IS
END FinalTest;
 
ARCHITECTURE behavior OF FinalTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT AllInOne
    PORT(
         outputData : OUT  std_logic_vector(31 downto 0);
         outputData2 : OUT  std_logic_vector(63 downto 0);
         index : IN  INTEGER;
         clock : IN  std_logic;
         TLB_type : IN  std_logic;
         cache_type : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal index : INTEGER:= 0;
   signal clock : std_logic := '0';
   signal TLB_type : std_logic := '0';
   signal cache_type : std_logic := '0';

 	--Outputs
   signal outputData : std_logic_vector(31 downto 0);
   signal outputData2 : std_logic_vector(63 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: AllInOne PORT MAP (
          outputData => outputData,
          outputData2 => outputData2,
          index => index,
          clock => clock,
          TLB_type => TLB_type,
          cache_type => cache_type
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;
		index <= 0;
		TLB_type<='1';
		cache_type<='0';
      -- insert stimulus here 

      wait;
   end process;

END;
