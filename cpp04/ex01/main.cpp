
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"
int main(void)
{
	{
		Dog *wini = new Dog;
		Dog	*jack = new Dog;
		Cat *murzik = new Cat;
		Cat *bel = new Cat;
		std::cout << "\n\n";	
		const Animal *animals[4] = {wini, jack, murzik, bel};
		for (int i = 0; i< 4; i++)
		{
			delete animals[i];
		}
	}
/*	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}*/
/*	Dog a;
	Dog c(a);*/
//	while(1);	
	return 0;
}
