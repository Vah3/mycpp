
# pragma once

# include <iostream>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &ob);
		Fixed	&operator=(const Fixed &ob);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					fix_value;
		static const int	fraction = 8;
};

