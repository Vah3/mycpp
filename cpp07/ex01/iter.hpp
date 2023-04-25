# pragma once

# include <iostream>

template <typename Tptr, typename Tsize, typename Tfoo>
void iter (Tptr ptr, Tsize size, Tfoo (*F));

template <typename Tptr, typename Tsize, typename Tfoo>
void iter (Tptr ptr, Tsize size, Tfoo (*F))
{
	for(Tsize i = 0; i < size; i++)
	{
		(*F)(ptr[i]);
	}
}
