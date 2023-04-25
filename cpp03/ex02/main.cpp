 # include "FragTrap.hpp"

int main(void)
{
	FragTrap b("cat");
	FragTrap c = b;
//	c.attack("urishin");
//	c.beRepaired(52);
//	c.takeDamage(150);
//	b.guardGate()
	std::cout << "name --"<< c.get_name() << std::endl;
	std::cout << "hit points " << c.get_hit_points() << std::endl;
	std::cout << "energy points " << c.get_energy_points() << std::endl;
	std::cout << "attack damage" << c.get_attack_damage() << std::endl;
	c.highFiveGuys();
	return (0);
}

