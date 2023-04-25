
# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):Hit_points(10), Energy_points(10), Attack_damage(0){
	std::cout << "default constructor called" << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap(){
	std::cout << "desturctor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ob)
{
	std::cout << "copy assignment opearator called" << std::endl;
	this->name = ob.get_name();
	this->Hit_points = ob.get_hit_points();
	this->Energy_points = ob.get_energy_points();
	this->Attack_damage = ob.get_attack_damage();
	return (*this);
}

//getters

std::string	ClapTrap::get_name()const{
	return (this->name);
}

int	ClapTrap::get_hit_points()const{
	return (this->Hit_points);
}

int	ClapTrap::get_energy_points()const{
	return (this->Energy_points);
}

int	ClapTrap::get_attack_damage()const{
	return (this->Attack_damage);
}

// setters

void	ClapTrap::set_name(std::string name){
	this->name = name;
}

void	ClapTrap::set_hit_points(int points){
	this->Hit_points = points;
}

void	ClapTrap::set_energy_points(int points){
	this->Energy_points = points;
}

void	ClapTrap::set_attack_damage(int points){
	this->Attack_damage = points;
}

/////////////

ClapTrap::ClapTrap(const ClapTrap &ob)
{
	*this = ob;
}

void	ClapTrap::attack(const std::string &target)
{
	if (Hit_points <= 0 || Energy_points <= 0)
		std::cout << "can't attack" << std::endl;
	else
	{
		std::cout << name << " attacks " << target << " , causing " << Attack_damage << " points of damage!" << std::endl;
		Energy_points--;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points <= 0 || Energy_points <= 0)
		std::cout << "can't repair" << std::endl;
	else
	{
		std::cout << name << " repaired " << amount << std::endl;
		Energy_points--;
		Hit_points += amount;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points <= 0 || Energy_points <= 0)
		std::cout << name << " is dead" << std::endl;
	else if(Hit_points - (int)amount <= 0)
	{
		std::cout << name << "  killed" << std::endl;
		Hit_points = 0;
	}
	else
	{
		std::cout << name << " damaged " << amount << std::endl;
		Hit_points -= amount;
	}
}

