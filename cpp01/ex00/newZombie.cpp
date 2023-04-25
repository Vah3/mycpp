
# include "Zombie.hpp"

Zombie* newZombie(std::string name){
	Zombie *newZombie;

	newZombie = NULL;
	newZombie = new Zombie;
	if (!newZombie)
		return (NULL);
	newZombie->set_name(name);
	newZombie->announce();
	return (newZombie);
}