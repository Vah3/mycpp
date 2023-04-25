
# pragma once

# include "header.h"

class Phonebook
{
	public:
		Contact contact[8];
		Phonebook();
		~Phonebook();
		int		add(Contact *contact);
		int		search();
};
