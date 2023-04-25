
# pragma once

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &ob);
		DiamondTrap &operator=(const DiamondTrap &ob);
		void whoAmI();
	private:
		std::string name;
};

