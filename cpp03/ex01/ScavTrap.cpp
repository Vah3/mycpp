
# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ob)
{

	std::cout << "ScavTrap copy assignment constructor called" << std::endl;
	name = ob.name;
	Hit_points = ob.Hit_points;
	Energy_points = ob.Energy_points;
	Attack_damage = ob.Attack_damage;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &ob) : ClapTrap(ob)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = ob;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (Hit_points <= 0 || Energy_points <= 0)
		std::cout << "can't attack" << std::endl;
	else
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << Attack_damage << " points of damage!" << std::endl;
		Energy_points--;
	}
}
