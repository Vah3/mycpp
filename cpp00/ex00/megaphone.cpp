
# include <iostream>

void	string_to_upper(std::string line)
{
	int i;

	i = 0;
	while (line[i])
	{
		line[i] = toupper(line[i]);
		i++;
	}
	std::cout << line;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(argv++ && *argv)
		string_to_upper(*argv);
	std::cout << std::endl;
	return (0);
}

