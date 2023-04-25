# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Cat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &ob)
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

WrongCat::WrongCat(const WrongCat & ob)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ob;
}

void	WrongCat::makeSound()const
{
	std::cout << "Mrrrrrrr~~" << std::endl;
}
