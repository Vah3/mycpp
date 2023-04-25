
# include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	attr = new Brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete attr;
	attr = NULL;
}

Dog &Dog::operator=(const Dog &ob)
{
	if (this == &ob)
	{
		std::cout << "Dog Self assignment" << std::endl;
		return (*this);
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = ob.type;
	this->attr = ob.attr;	
	return (*this);
}

Dog::Dog(const Dog & ob) : Animal(ob)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	if(this == &ob)
	{
		std::cout << "Dog Cant copy" << std::endl;
		return ;
	}
	this->type = ob.type;
	if (this->attr)
		delete this->attr;
	this->attr = new Brain;
	for (int i = 0; i < 100; i++)
	{
		this->attr->ideas[i] = ob.attr->ideas[i];
	}
}

void	Dog::makeSound()const
{
	std::cout << "Bark~ Bark~" << std::endl;
}
