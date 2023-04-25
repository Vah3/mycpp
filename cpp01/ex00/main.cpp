
# include "Zombie.h"

int main(void)
{
	Zombie *myZombie;
	randomChump("Wow");
	myZombie = newZombie("its one");
	delete (myZombie);
}
