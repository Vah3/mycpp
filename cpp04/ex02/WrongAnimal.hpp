#pragma once

# include <iostream>

class WrongAnimal{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &);
		WrongAnimal(const WrongAnimal&);
		void	makeSound()const;
		std::string getType()const;
	protected:
		std::string type;
};
