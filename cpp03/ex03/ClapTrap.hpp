
# pragma once

# include <iostream>

class	ClapTrap{
	public:
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(const	ClapTrap &);
		ClapTrap &operator=(const ClapTrap &);
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int	amount);
		//getters
		std::string	get_name()const;
		int		get_hit_points()const;
		int		get_energy_points()const;
		int		get_attack_damage()const;
		//setters
		void	set_name(std::string);
		void	set_hit_points(int);
		void	set_energy_points(int);
		void	set_attack_damage(int);
	protected:
		std::string	name;
		int	Hit_points;
		int	Energy_points;
		int	Attack_damage;
};

