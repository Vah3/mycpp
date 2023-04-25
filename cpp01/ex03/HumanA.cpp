
# include "HumanA.hpp"
# include "Weapon.hpp"
# include "HumanB.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon) : weapon(newWeapon){
	name = newName;
}

HumanA::~HumanA(){
}

void	HumanA::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
