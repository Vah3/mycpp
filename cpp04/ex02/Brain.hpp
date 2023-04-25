# pragma once

# include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain &operator=(const Brain&);
		Brain(const Brain&);
		std::string ideas[100];
};
