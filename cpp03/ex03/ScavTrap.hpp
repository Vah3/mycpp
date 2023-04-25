
# pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual  public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &ob);
		ScavTrap &operator=(const ScavTrap &);
		void	attack(const std::string& target);
		void	guardGate();
};
