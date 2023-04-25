 # include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Clep");
	ClapTrap b(a);

	a = b;
	a.attack("Trap");
	a.takeDamage(3);
	a.beRepaired(2);
	a.takeDamage(150);
	return (0);
}

