# pragma once

//# include <iostream>
# include <iostream>
# include <exception>
# include <string>
# include <ctime>

# define BLACK	"\33[1;30m"
# define RED	"\33[1;31m"
# define GREEN	"\33[1;32m"
# define YELLOW	"\33[1;33m"
# define BLUE	"\33[1;34m"
# define PINK	"\33[1;35m"
# define CYAN	"\33[1;36m"
# define WHITE	"\33[1;37m"
# define RESET	"\33[0;m"

template <typename T>
class Array
{
	public:
		Array();
		~Array();
		Array(const Array &);
		Array &operator=(const Array &);
		T &operator[](int);
		T const &operator[](int)const ;
		unsigned int size()const;
		Array(unsigned int);
	private:
		class my_expt : public std::exception
		{
			char const * what() const throw();
		};
		unsigned int	_size;
		T				*_array;
};

template <typename T>
Array<T>::Array()
{
	_array = NULL;
	_size = 0;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>::Array(const Array & ob)
{
	_size = ob._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		this->_array[i] = ob._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array & ob)
{
	if (this == &ob)
		return *this;
	_size = ob._size;
	delete[] _array;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		this->_array[i] = ob._array[i];
	return *this;
}

template <typename T>
T &Array<T>::operator[](int index)
{
	if (index < 0 || static_cast <unsigned int> (index) > _size)
	{
		throw my_expt();
	}	
	return _array[index];
}

template <typename T>
T const &Array<T>::operator[](int index) const
{
	if (index < 0 || static_cast <unsigned int> (index) > _size)
	{
		throw my_expt();
	}	
	return _array[index];
}
template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
//	for(unsigned int i = 0; i < _size; i++)
//		_array[i] = 0;
}

template <typename T>
unsigned int Array<T>::size()const
{
	return _size;
}

template <typename T>
char const * Array<T>::my_expt::what() const throw()
{
	return "invalid index";
}
