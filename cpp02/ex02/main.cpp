#include "Fixed.hpp"

/*int main(void)
{
	Fixed a;
	Fixed b;
	Fixed sum;

	a.setRawBits(5);
	b.setRawBits(8);
	
	sum = a + b;
	std::cout << a.getRawBits() << " " << b.getRawBits() << " " << sum.getRawBits() << std::endl;
	return (0);
}*/

/*int main( void ) {
	Fixed a;
		Fixed const b( Fixed(5.05f)  *  Fixed(2) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << ">>>>> " << a * 2 << std::endl;
		std::cout << a + 1<< std::endl;
		std::cout << ">>>>> " << a / 2 << std::endl;
		std::cout << a - 1 << std::endl;
		std::cout << (a > b) << std::endl;
		std::cout << (a < b) << std::endl;
		std::cout << (a  >= b) << std::endl;
		std::cout << (a <= b) << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;

		std::cout << Fixed::min( a, b ) << std::endl;
return 0;
}*/

int main( void ) {
	Fixed a;
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a + 5 << std::endl;
/*	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
*/	return 0;
}
