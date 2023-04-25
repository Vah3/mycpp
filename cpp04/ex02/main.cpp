
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"
int main(void)
{
//	Animal cant;
	Dog *g;
	Cat *c;

	g = new Dog;
	c = new Cat;
	g->makeSound();
	c->makeSound();
	delete g;
	delete c;
	return 0;
}
