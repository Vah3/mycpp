
# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &ob)
{
	if (this == &ob)
	{
		std::cout << "self assignment" << std::endl;
		return (*this);
	}
	std::cout << "Brain copy cosntructor called" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = ob.ideas[i];
	}
	return (*this);
}

Brain::Brain(const Brain& ob)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = ob;
}
