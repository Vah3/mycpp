# pragma once

# include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed(const Fixed &ob);
		Fixed			&operator=(const Fixed &ob);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					fix_value;
		static const int	fraction = 8;
};

std::ostream& operator<<(std::ostream& ostream, const Fixed& other);
