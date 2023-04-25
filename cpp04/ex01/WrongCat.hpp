# pragma once

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		~WrongCat();
		WrongCat &operator=(const WrongCat &);
		WrongCat(const WrongCat &);
		void	makeSound()const;
};
