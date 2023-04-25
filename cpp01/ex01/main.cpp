
# include "Zombie.h"

int main(void)
{
	Zombie *zomb;
	int i = 0;
	zomb = zombieHorde(10, "same zombie");

	while (zomb && i < 10)
	{
		zomb[i].announce();
		i++;
	}
	delete[](zomb);
	return (0);
}
