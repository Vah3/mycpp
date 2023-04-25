
# include <iostream>
# include <fstream>
# include <string>

int main(int argc, char **argv)
{
	std::fstream myInStream;
	std::fstream myOutStream;
	std::string myString;
	std::string outfile;
	size_t occur;
	
	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "invalid argumment" << std::endl;
		return (1);
	}
	occur = 0;
	outfile = argv[1];
	outfile += ".replace";
	myInStream.open(argv[1],std::ios_base::in);
	if (!myInStream.good())
	{
		std::cerr << "Istream failed" << std::endl;
		return (1);
	}
	myOutStream.open(outfile, std::ios_base::out);
	if (!myOutStream.good())
	{
		myInStream.close();
		std::cerr << "Ostream failed" << std::endl;
		return (1);
	}
	while(getline(myInStream, myString) && myString.size())
	{
		while (1)
		{
			occur = myString.find(argv[2],0);
			if (occur == std::string::npos)
				break;
			myString.erase(occur, std::strlen(argv[2]));
			myString.insert(occur, argv[3]);
		}
			myOutStream << myString << std::endl;
	}
	return (0);
}

