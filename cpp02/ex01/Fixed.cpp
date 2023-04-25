# include "Fixed.hpp"

Fixed::Fixed():fix_value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	fix_value = value << fraction;
}

Fixed::Fixed(const float val){
	std::cout << "Float constructor called" << std::endl;
	fix_value = val * (1 << fraction);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &ob){
	std::cout << "Copy constructor called" << std::endl;
	*this = ob;
}

Fixed	&Fixed::operator=(const Fixed &ob){
	if (this == &ob)
		return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
	this->fix_value = ob.getRawBits();
	return (*this);
}


int		Fixed::getRawBits(void)const{
	return (fix_value);
}

void	Fixed::setRawBits(int const raw){
	fix_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)fix_value / (1 << fraction));
}

int	Fixed::toInt(void) const
{
	return (fix_value >> fraction);
}

std::ostream&	operator<<(std::ostream &ostream, const Fixed& ob)
{
	ostream << ob.toFloat();
  return  (ostream);
}
