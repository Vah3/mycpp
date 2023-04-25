# include "header.h"\

void	correct_string(std::string *line)
{
	int	len, i;

	i = 0;
	len = (*line).length();
	while (len + i < 10)
	{
		*line = " " + *line;
		i++;
	}
	if (len > 10)
	{
		(*line)[9] = '.';
		*line = (*line).substr(0, 10);
	}
}

int	checkString(std::string *line)
{
	for(int i = 0;(*line)[i];++i)
	{
		if (!isalpha((*line)[i]))
		{
			std::cout << "wrong input" << std::endl;
			return (1);
		}
	}
	correct_string(line);
	return (0);
}

int	checkStringForNum(std::string *line)
{
	for(int i = 0;(*line)[i];++i)
	{
		if (!isdigit((*line)[i]))
		{
			std::cout << "wrong input" << std::endl;
			return (1);
		}
	}
	correct_string(line);
	return (0);
}

int	main(void)
{
	std::string line;
	Phonebook phonebook;
	int	i;

	i = 8;
	line.clear();

	while(1)
	{
		line.clear();
		std::cout << "input something" << std::endl;
		if(!std::getline(std::cin,line))
			return (0);
		if (line == "ADD")
		{
			if(phonebook.add(&phonebook.contact[i % 8]))
				continue ;
			i++;
		}
		else if (line == "SEARCH")
		{
			if (phonebook.search() == 1)
				return (0);
		}
		else if (line == "EXIT")
			return (0);
	}
	return (0);
}
