
# include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){
	std::cout << "Zombie '" << name << "' died, Good bye" << std::endl;
}

void	Zombie::announce(void){
	std::cout << name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string newName){
	name = newName;
}

