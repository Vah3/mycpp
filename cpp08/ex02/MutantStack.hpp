
# pragma once

# include <iostream>
# include <stack>
# include <iterator>
#include <typeinfo> 
# include <vector>
# include <list>

template <typename T>
class  MutantStack : public std::stack<T>
{
	public:
	MutantStack();
	MutantStack<T> &operator=(const MutantStack & ob);
	~MutantStack();
	void	foo();
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	iterator begin();
	reverse_iterator rbegin();
	iterator end();
	reverse_iterator rend();
};

template <typename T>
void	MutantStack<T>::foo()
{
	std::cout << typeid(this->c.begin()).name() << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack & ob)
{
	if (this == &ob)
		return *this;
	this->c = ob.c;
	return *this ;
}

template <typename T>
typename   std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename  std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template <typename T>
typename  std::stack<T>::container_type::reverse_iterator MutantStack<T>::rend()
{
	return this->c.rend();
}

template <typename T>
typename  std::stack<T>::container_type::reverse_iterator MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}
