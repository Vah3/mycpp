# include "Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(unsigned int N)
{
	size = N;
}

Span &Span::operator=(const Span & ob)
{
	if (this == &ob)
		return *this;
	this->size = ob.size;
	this->store = ob.store;
	return *this;
}

void	Span::addNumber(int Nu)
{
	if (store.size() == size)
		throw std::exception();
	store.push_back(Nu);
	std::sort(store.begin(), store.end());
}

int 	Span::longestSpan()
{
	if (store.size() == 0 || store.size() == 1)
		throw std::exception();
	return (*(store.end() - 1) - *(store.begin()));
}

int		Span::shortestSpan()
{
	int	min_dist;
	if (store.size() == 0 || store.size() == 1)
		throw std::exception();
	std::vector<int>::iterator it = store.begin() + 1;
	min_dist = *it - *(it - 1);
	for( ; it != store.end(); it++)
	{
		if (*it - *(it - 1) < min_dist)
			min_dist = *it - *(it - 1);
	}
	return min_dist;
}

void	Span::addGroupNum(int count)
{
	std::srand(std::time(0));
	for(int i = 0; i < count; i++)
	{
		addNumber(std::rand() % 100); //size checked in addNumber
	}
}

void	Span::show()
{
	for(unsigned int i = 0; i < store.size(); i++)
		std::cout << store[i] << std::endl;
}
