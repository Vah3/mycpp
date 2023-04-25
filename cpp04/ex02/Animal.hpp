
#pragma once

# include <iostream>

class Animal{
	public:
		Animal();
		virtual ~Animal();
		Animal &operator=(const Animal &);
		Animal(const Animal&);
		virtual void	makeSound() const = 0;
		std::string getType()const;
	protected:
		std::string type;
};
