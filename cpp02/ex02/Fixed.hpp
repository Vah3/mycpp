# pragma once

# include <iostream>
# include <cmath>
class	Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &ob);
		~Fixed();
		//The comparison operators
		Fixed	&operator=(const Fixed &ob);
		bool	operator>(const Fixed &ob)const;
		bool	operator<(const Fixed &ob)const;
		bool	operator>=(const Fixed &ob)const;
		bool	operator<=(const Fixed &ob)const;
		bool	operator==(const Fixed &ob)const;
		bool	operator!=(const Fixed &ob)const;
		//The  arithmetic operators:
		Fixed	operator+(const Fixed &ob)const;
		Fixed	operator-(const Fixed &ob)const;
		Fixed	operator*(const Fixed &ob)const;
		Fixed	operator/(const Fixed &ob)const;
		//The  increment/decrement
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		//static member functions
		Fixed static	&min(Fixed &ob1, Fixed &ob2);
		Fixed static	&min(const Fixed &ob1, const Fixed &ob2);
		Fixed static	&max(Fixed &ob1,Fixed &ob2);
		Fixed static	&max(const Fixed &ob1, const Fixed &ob2);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					fix_value;
		static const int	fraction = 8;
};

std::ostream& operator<<(std::ostream& ostream, const Fixed& other);
