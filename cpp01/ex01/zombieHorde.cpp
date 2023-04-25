
# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie;
	int i;

	i = 0;
	zombie = NULL;
	zombie = new Zombie[N];
	if (!zombie)
		return (NULL);
	while(i < N)
	{
		zombie[i].set_name(name);
		i++;
	}
	return (zombie);
}
