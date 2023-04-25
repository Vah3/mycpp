# include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	attr = new Brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete attr;
}

Cat &Cat::operator=(const Cat &ob)
{
	if (this == &ob)
	{
		std::cout << "Cat Self assignment" << std::endl;
		return (*this);
	}
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->type = ob.type;
	this->attr = ob.attr;
	return (*this);
}

Cat::Cat(const Cat & ob) : Animal(ob)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	if (this == &ob)
	{
		std::cout << "Cat cant copy" << std::endl;
		return;
	}
	this->type = ob.type;
	if (this->attr)
		delete this->attr;
	this->attr = new Brain;
	for(int i = 0; i < 100; i++)
	{
		this->attr->ideas[i] = ob.attr->ideas[i];
	}
}

void	Cat::makeSound()const
{
	std::cout << "Mrrrrrrr~~" << std::endl;
}
