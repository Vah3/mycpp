# include "HumanB.hpp"

HumanB::HumanB(std::string newName){
	name = newName;
	weapon = NULL;
}

HumanB::~HumanB(){
}

void	HumanB::attack(){
	std::cout << name << " attacks with their ";
	if (weapon)
		std::cout << weapon->getType() << std::endl;
	else
		std::cout << "arms" << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}
