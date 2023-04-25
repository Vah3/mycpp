
# pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog();
		~Dog();
		Dog &operator=(const Dog &);
		Dog(const Dog &);
		void	makeSound()const;
	private:
		Brain *attr;
};
