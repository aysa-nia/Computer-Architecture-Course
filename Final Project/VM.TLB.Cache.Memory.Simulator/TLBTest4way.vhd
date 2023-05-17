--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:23:24 07/09/2022
-- Design Name:   
-- Module Name:   E:/VHDL/Project/FinalProject/VM.TLB.Cache.Memory.Simulator/TLBTest4way.vhd
-- Project Name:  VM.TLB.Cache.Memory.Simulator
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TLB
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
 
ENTITY TLBTest4way IS
END TLBTest4way;
 
ARCHITECTURE behavior OF TLBTest4way IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TLB
    PORT(
         VirtualAddress : IN  std_logic_vector(15 downto 0);
         clock : IN  std_logic;
         miss_hit : OUT  std_logic;
         PPNOut : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal VirtualAddress : std_logic_vector(15 downto 0) := (others => '0');
   signal clock : std_logic := '0';

 	--Outputs
   signal miss_hit : std_logic;
   signal PPNOut : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.TLB(FourwaySetAssociative) PORT MAP (
          VirtualAddress => VirtualAddress,
          clock => clock,
          miss_hit => miss_hit,
          PPNOut => PPNOut
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
		VirtualAddress<="1111111010111111";
      -- insert stimulus here 

      wait;
   end process;

END;
