# pragma once

# include <iostream>

template <typename T>
void	swap (T& p1, T& p2);

template <typename T>
T	min(T p1,T p2);

template <typename T>
T	max(T p1,T p2);

//////////////////


template <typename T>
void	swap (T &p1, T &p2)
{
	T temp = p1;
	p1 = p2;
	p2 = temp;
}

//• min: Compares the two values passed in its arguments and returns the smallest
//one. If the two of them are equal, then it returns the second one.

template <typename T>
T	min(T p1,T p2)
{
	if (p1 < p2)
		return p1;
	else
		return p2;
}

//max: Compares the two values passed in its arguments and returns the greatest one.
//If the two of them are equal, then it returns the second one.

template <typename T>
T	max(T p1,T p2)
{
	if (p1 > p2)
		return p1;
	else
		return p2;
}
