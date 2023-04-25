# pragma once

# include <iostream>
# include <algorithm>

template <typename T>
int easyfind (T params, int needle)
{
	typename T::iterator ndle;
	ndle = find(params.begin(),params.end(), needle);
	if (ndle != params.end())
		return *ndle;
	else
		throw std::exception();
}
