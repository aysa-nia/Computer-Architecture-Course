--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:10:13 06/02/2022
-- Design Name:   
-- Module Name:   E:/VHDL/HW4/4/RegisterFile/RFTest.vhd
-- Project Name:  RegisterFile
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RegisterFile
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
 
ENTITY RFTest IS
END RFTest;
 
ARCHITECTURE behavior OF RFTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RegisterFile
    PORT(
         write_enable : IN  std_logic;
         clk : IN  std_logic;
         reset : IN  std_logic;
         writeport : IN  std_logic_vector(31 downto 0);
         adrwport : IN  std_logic_vector(4 downto 0);
         adrport0 : IN  std_logic_vector(4 downto 0);
         adrport1 : IN  std_logic_vector(4 downto 0);
         readport0 : OUT  std_logic_vector(31 downto 0);
         readport1 : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal write_enable : std_logic := '0';
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal writeport : std_logic_vector(31 downto 0) := (others => '0');
   signal adrwport : std_logic_vector(4 downto 0) := (others => '0');
   signal adrport0 : std_logic_vector(4 downto 0) := (others => '0');
   signal adrport1 : std_logic_vector(4 downto 0) := (others => '0');

 	--Outputs
   signal readport0 : std_logic_vector(31 downto 0);
   signal readport1 : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RegisterFile PORT MAP (
          write_enable => write_enable,
          clk => clk,
          reset => reset,
          writeport => writeport,
          adrwport => adrwport,
          adrport0 => adrport0,
          adrport1 => adrport1,
          readport0 => readport0,
          readport1 => readport1
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
		-- INSERT DATA TO REGISTER
		write_enable<= '1';
		adrport0		<= (others => '0');
		adrport1		<= (others => '0');
		adrwport 	<= "00001";
		writeport 	<= (others => '1');
		wait for CLK_period*10;
		
		-- READ DATA FROM REGISTER
		write_enable <= '0';
		adrport0	<= "00001";
		adrport1	<= "00001";
		adrwport <= (others => '0');
		writeport<= (others => '0');
      wait;
   end process;

END;
