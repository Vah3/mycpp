
# pragma once
# include <iostream>
# include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string, Weapon &);
		~HumanA();
		void	attack();
	private:
		std::string name;
		Weapon &weapon;
};

