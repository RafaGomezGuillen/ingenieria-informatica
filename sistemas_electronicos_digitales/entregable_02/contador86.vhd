
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity contador86 is
    Port ( ce : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           count : out  STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC);
end contador86;

architecture Behavioral of contador86 is

	COMPONENT ffT_reset
	PORT(
		reset : IN std_logic;
		clk : IN std_logic;
		ce : IN std_logic;
		t : IN std_logic;          
		q : OUT std_logic
		);
	END COMPONENT;
	
	COMPONENT ffD_preset
	PORT(
		clk : IN std_logic;
		preset : IN std_logic;
		ce : IN std_logic;
		d : IN std_logic;          
		q : OUT std_logic
		);
	END COMPONENT;
	
	COMPONENT ffD_reset
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		ce : IN std_logic;
		d : IN std_logic;          
		q : OUT std_logic
		);
	END COMPONENT;

	signal ta, db, dc, td : std_logic;
	signal qa, qb, qc, qd : std_logic;
	
begin

	unitA: ffT_reset PORT MAP(
		reset => reset,
		clk => clk,
		ce => ce,
		t => ta,
		q => qa
	);

	unitB: ffD_preset PORT MAP(
		clk => clk,
		preset => reset,
		ce => ce,
		d => db,
		q => qb
	);

	unitC: ffD_reset PORT MAP(
		clk => clk,
		reset => reset,
		ce => ce,
		d => dc,
		q => qc
	);

	unitD: ffT_reset PORT MAP(
		reset => reset,
		clk => clk,
		ce => ce,
		t => td,
		q => qd
	);
	
	ta <= (not qb and not qc and qd) or (qb and qc and qd);
	db <= (not qa and not qc and not qd) or (qb and not qd);
	dc <= (not qa and not qb and not qc and not qd) or (not qb and qc and qd) or (qb and qc and not qd) or (qa and qd);
	td <= (not qa and not qb and qd) or (qc and not qd) or (qb and not qc);
	
	count <= qa & qb & qc & qd;
	
end Behavioral;

