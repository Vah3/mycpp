
# include "Weapon.hpp"

Weapon::Weapon(){
	type = "without weapon";
}

Weapon::Weapon(std::string def){
	type = def;
}

Weapon::~Weapon(){
}

const	std::string& Weapon::getType()
{
	return ((const std::string&)type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}
