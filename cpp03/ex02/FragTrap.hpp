
# pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& ob);
		FragTrap &operator=(const FragTrap& ob);
		void	highFiveGuys(void);
};
