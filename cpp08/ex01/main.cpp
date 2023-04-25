# include "Span.hpp"

int main(void)
{
	Span sp = Span(-1);
//	sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
	sp.addGroupNum(25);
	sp.show();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}
