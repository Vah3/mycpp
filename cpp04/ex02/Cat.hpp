# pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public :
		Cat();
		~Cat();
		Cat &operator=(const Cat &);
		Cat(const Cat &);
		void	makeSound()const;
	private:
		Brain *attr;
};
