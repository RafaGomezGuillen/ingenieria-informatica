
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sistema86 is
    Port ( clk : in  STD_LOGIC;
           ce : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           count : out  STD_LOGIC_VECTOR (3 downto 0);
           led : out  STD_LOGIC_VECTOR (6 downto 0));
end sistema86;

architecture Behavioral of sistema86 is

COMPONENT contador86
PORT(
ce : IN std_logic;
reset : IN std_logic;
clk : IN std_logic;          
count : OUT std_logic_vector(3 downto 0)
);
END COMPONENT;

COMPONENT dec7seg
PORT(
bcd : IN std_logic_vector(3 downto 0);          
led : OUT std_logic_vector(6 downto 0)
);
END COMPONENT;

signal int : std_logic_vector(3 downto 0);

begin

Inst_contador86: contador86 PORT MAP(
ce => ce,
reset => reset,
count => int,
clk => clk
);

Inst_dec7seg: dec7seg PORT MAP(
bcd => int,
led => led
);

count <= int;

end Behavioral;
