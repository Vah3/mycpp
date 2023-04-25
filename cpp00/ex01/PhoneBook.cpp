
# include "header.h"

Phonebook::Phonebook(){
}

Phonebook::~Phonebook(){
}

int	Phonebook::search(void)
{
	int i;
	std::string line2;

	i = -1;
	while (++i < 8)
	{
		std::cout << i + 1 << ". ";
		contact[i].print_all();
	}
	std::cout << "input number" << std::endl;
	if (!std::getline(std::cin,line2))
	{
		std::cout << "bad input,exiting\n";
		exit (0);
	}
	if (!checkStringForNum(&line2))
	{
		i = std::atoi(line2.c_str());
		if (i > 8 || i <= 0)
		{
			std::cout << "not valid" << std::endl;
			return (0);
		}
		std::cout << i << ". ";
		contact[i - 1].print_all();
	}
	return (0);
}

int	Phonebook::add(Contact *contact)
{
	std::string line1;
	Contact tmp;

	std::cout << "input name ";
	for(int	i = 0; i < 5; ++i)
	{
		line1.clear();
		if (!std::getline(std::cin,line1))
		{
			std::cout << "\nbad input,exiting\n";
			exit (1);
		}
		if (line1.length() == 0)
			return (1);
		if (i == 0 && !checkString(&line1))
		{
			tmp.set_name(line1);
			std::cout << "input last name ";
		}
		else if (i == 1 && !checkString(&line1))
		{
			tmp.set_last_name(line1);
			std::cout << "input nickname ";
		}
		else if (i == 2 && !checkString(&line1))
		{
			tmp.set_nickname(line1);
			std::cout << "input phone number ";
		}
		else if (i == 3 && !checkStringForNum(&line1))
		{
			tmp.set_phone(line1);
			std::cout << "input your darkest secret ";
		}
		else if (i == 4 && !checkString(&line1))
			tmp.set_secret(line1);
		else
			return (1);
	}
		*contact = tmp;
	return (0);
}
