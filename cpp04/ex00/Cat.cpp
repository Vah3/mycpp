# include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &ob)
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

Cat::Cat(const Cat & ob) : Animal(ob)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ob;
}

void	Cat::makeSound()const
{
	std::cout << "Mrrrrrrr~~" << std::endl;
}
