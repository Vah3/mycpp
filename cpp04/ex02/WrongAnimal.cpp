
# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Unnamed";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &ob)
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

WrongAnimal::WrongAnimal(const WrongAnimal& ob)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ob;
}

void	WrongAnimal::makeSound()const
{
	std::cout << "silence" << std::endl;
}

std::string WrongAnimal::getType()const
{
	return (type);
}
