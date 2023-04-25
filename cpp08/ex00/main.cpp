#include "easyfind.hpp"
#include <vector>
# include <map>
# include <list>
int main(void)
{
//	std::list<int> ob{12,45,14,2};
	std::list<int> ob;
	ob.push_back(12);
	ob.push_back(45);
	ob.push_back(14);
	ob.push_back(2);
	try{
		std::cout << easyfind(ob,45) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "not found, throwed exception" << std::endl;
	}
	return (0);
}
