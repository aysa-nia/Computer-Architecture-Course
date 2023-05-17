----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:25:54 07/08/2022 
-- Design Name: 
-- Module Name:    AllInOne - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity AllInOne is Port ( outputData : out  STD_LOGIC_VECTOR (31 downto 0);
								  outputData2 : out  STD_LOGIC_VECTOR (63 downto 0);
								  index : in INTEGER; 
								  clock : in STD_LOGIC;
								  TLB_type : in STD_LOGIC; -- 1 for fully 0 for 4 way
								  cache_type : in STD_LOGIC); -- 1 for direct 0 for 2 way);
end AllInOne;

architecture Behavioral of AllInOne is
	signal VAInput : std_logic_vector(15 downto 0);
	signal miss_hitTLBFully : std_logic;
	signal PPNOutTLBFully : std_logic_vector(3 downto 0);
	signal miss_hitTLBFourWay : std_logic;
	signal PPNOutTLBFourWay : std_logic_vector(3 downto 0);
	signal PhysicalAdress : std_logic_vector(10 downto 0);
	signal PageOffset : std_logic_vector(6 downto 0);
	signal miss_hitCacheDirect : std_logic;
	signal OutputDataDirect : std_logic_vector(63 downto 0);
	signal OutputDataTempDirect : std_logic_vector(31 downto 0);
	signal miss_hitCacheTwoWay : std_logic;
	signal OutputDataTwoWay : std_logic_vector(31 downto 0);
	signal OutputDataTempTwoWay : std_logic_vector(63 downto 0);
	
begin
	Processor: entity work.Processor PORT MAP(index => index ,
											virtualAddress => VAInput ,
											clock => clock);
	TLBFully: entity work.TLB(FullyAssociative) PORT MAP(VirtualAddress => VAInput ,
													clock => clock ,
													miss_hit => miss_hitTLBFully ,
													PPNOut => PPNOutTLBFully);
	TLBFourWay: entity work.TLB(FourwaySetAssociative) PORT MAP(VirtualAddress => VAInput ,
													clock => clock ,
													miss_hit => miss_hitTLBFourWay  ,
													PPNOut => PPNOutTLBFourWay);
	PageOffset<= VAInput(6 downto 0);
	process(clock)
	begin
		if(TLB_type = '1') then
			PhysicalAdress<= PPNOutTLBFully & PageOffset;
		else
			PhysicalAdress<= PPNOutTLBFourWay & PageOffset;
		end if;
	end process;
		CacheDirect: entity work.Cach(Direct) PORT MAP(physicalAddress => PhysicalAdress  ,
															miss_hit => miss_hitCacheDirect,
															clock => clock ,
															output32 => OutputDataTempDirect ,
															output64 => OutputDataDirect );
		Cache2Way: entity work.Cach(TwoWaySetAssociative) PORT MAP(physicalAddress => PhysicalAdress  ,
															miss_hit => miss_hitCacheTwoWay,
															clock => clock ,
															output32 => OutputDataTwoWay ,
															output64 => OutputDataTempTwoWay );
	process(PhysicalAdress)
	begin
		if(cache_type = '1')then
			outputData2<= OutputDataDirect;
			outputData<=(others=>'U');
		else
			outputData<=OutputDataTwoWay;
			outputData2<=(others=>'U');
		end if;
	end process;
end Behavioral;

