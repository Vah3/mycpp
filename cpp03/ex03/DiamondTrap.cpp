
# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = name;
	this->Hit_points = 100;//FragTrap::Hit_point does not work
	this->Energy_points = 50;//ScavTrap::Energy_point does not work
	this->Attack_damage = 30; //FragTrap::Attack_damage does not work (last inherited class values)
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTtrap is " << this->name << std::endl;
	std::cout << "ClapTrap is " << ClapTrap::name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ob)
{

	std::cout << "DiamondTrap copy assignment constructor called" << std::endl;
	name = ob.name;
	Hit_points = ob.Hit_points;
	Energy_points = ob.Energy_points;
	Attack_damage = ob.Attack_damage;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &ob) : ClapTrap(ob) , FragTrap(ob), ScavTrap(ob) 
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = ob;
}
