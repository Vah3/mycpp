# include "Fixed.hpp"

Fixed::Fixed():fix_value(0){
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
//	std::cout << "Int constructor called" << std::endl;
	this->fix_value = value << fraction;
}

Fixed::Fixed(const float val){
//	std::cout << "Float constructor called" << std::endl;
	this->fix_value = (int)roundf(val * (1 << fraction));
}

Fixed::~Fixed(){
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &ob){
//	std::cout << "Copy constructor called" << std::endl;
	this->fix_value = ob.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &ob){
	if (this == &ob)
		return (*this);
//	std::cout << "Copy assignment operator called" << std::endl;
	this->fix_value = ob.getRawBits();
	return (*this);
}

//The comparison operators

bool	Fixed::operator>(const Fixed &ob)const
{
	if(this->fix_value > ob.fix_value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &ob) const
{
	if(this->fix_value < ob.fix_value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &ob) const
{
	if(this->fix_value >= ob.fix_value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &ob) const
{
	if(this->fix_value <= ob.fix_value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &ob) const
{
	if(this->fix_value == ob.fix_value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &ob) const
{
	if(this->fix_value != ob.fix_value)
		return (true);
	return (false);
}

//The  arithmetic operators:

Fixed Fixed::operator+(const Fixed &ob) const
{
	return(Fixed(this->toFloat() + ob.toFloat()));
}

Fixed Fixed::operator-(const Fixed &ob) const
{
	return (Fixed(this->toFloat() - ob.toFloat()));
}

Fixed Fixed::operator*(const Fixed &ob) const
{
	return (Fixed(this->toFloat() * ob.toFloat()));
}


Fixed Fixed::operator/(const Fixed &ob) const
{
	Fixed new_ob;

	if (ob.toFloat() == 0)
	{
		std::cerr << "cant divide" << std::endl;
		return (0);
	}
	return (Fixed(this->toFloat() / ob.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->fix_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;

	temp = *this;
	this->fix_value += 1;
	return (temp);
}

Fixed &Fixed::operator--(void)
{
	this->fix_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;

	temp = *this;
	this->fix_value -= 1;
	return (temp);
}


//overloaded member functions
Fixed	&Fixed::min(Fixed &ob1, Fixed &ob2)
{
	if (ob1 < ob2)
		return (ob1);
	else
		return (ob2);
}

Fixed	&Fixed::min(const Fixed &ob1, const Fixed &ob2)
{
	Fixed &ret1 = (Fixed &)ob1;
	Fixed &ret2 = (Fixed &)ob2;

	if (ob1 < ob2)
		return (ret1);
	else
		return (ret2);
}

Fixed	&Fixed::max(Fixed &ob1, Fixed &ob2)
{
	if (ob1 > ob2)
		return (ob1);
	else
		return (ob2);
}

Fixed	&Fixed::max(const Fixed &ob1, const Fixed &ob2)
{

	Fixed &ret1 = (Fixed &)ob1;
	Fixed &ret2 = (Fixed &)ob2;
	if (ob1 > ob2)
		return (ret1);
	else
		return (ret2);
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

