
# include <iostream>

int main(void)
{
	std::string stringVar;
	std::string *stringPTR;

	stringVar = "HI THIS IS BRAIN";
	stringPTR = &stringVar;
	std::string& stringREF = stringVar;

	std::cout << "address stringVar " <<  &stringVar << std::endl;
	std::cout << "address held by stringPTR " << stringPTR << std::endl;
	std::cout << "address held by stringREF " << &stringREF << std::endl;

	std::cout << "value stringVar " <<  stringVar << std::endl;
	std::cout << "value pinted to by stringPTR " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF " << stringREF << std::endl;

	return (0);
}
