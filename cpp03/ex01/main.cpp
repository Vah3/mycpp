 # include "ScavTrap.hpp"

int main(void)
{
	ScavTrap b("anun");
	ScavTrap a(b);
	b.attack("urishin");
	b.beRepaired(52);
	b.takeDamage(150);
	b.guardGate();
	return (0);
}

