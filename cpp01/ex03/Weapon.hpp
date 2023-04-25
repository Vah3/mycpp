
# pragma once
# include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string);
		~Weapon();
		const	std::string&	getType();
		void					setType(std::string newType);
	private:
		std::string type;
};
