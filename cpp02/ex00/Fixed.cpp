
# include "Fixed.hpp"

Fixed::Fixed():fix_value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &ob){
	std::cout << "Copy constructor called" << std::endl;
	*this = ob;
}

Fixed	&Fixed::operator=(const Fixed &ob){
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(ob.getRawBits());
	return (*this);
}

int		Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (fix_value);
}

void	Fixed::setRawBits(int const raw){
	fix_value = raw;
}

