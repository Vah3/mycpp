
# include "Animal.hpp"

Animal::Animal()
{
	type = "Unnamed";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &ob)
{
	if (this == &ob)
	{
		std::cout << "Self assignment" << std::endl;
		return (*this);
	}
	std::cout << "Copy assignment constructor called" << std::endl;
	this->type = ob.type;
	return (*this);
}

Animal::Animal(const Animal& ob)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ob;
}

void	Animal::makeSound()const
{
	std::cout << "silence" << std::endl;
}

std::string Animal::getType()const
{
	return (type);
}

