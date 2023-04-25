
# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	set_hit_points(100);
	set_energy_points(100);
	set_attack_damage(30);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ob)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	name = ob.name;
	Hit_points = ob.Hit_points;
	Energy_points = ob.Energy_points;
	Attack_damage = ob.Attack_damage;
	return (*this);
}

FragTrap::FragTrap(const FragTrap& ob) : ClapTrap(ob)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = ob;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "High fives Guys" << std::endl;
}
