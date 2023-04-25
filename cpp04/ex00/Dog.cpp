
# include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &ob)
{
	if (this == &ob)
	{
		std::cout << "Self assignment" << std::endl;
		return (*this);
	}
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = ob.type;
	return (*this);
}

Dog::Dog(const Dog & ob) : Animal(ob)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ob;
}

void	Dog::makeSound()const
{
	std::cout << "Bark~ Bark~" << std::endl;
}
