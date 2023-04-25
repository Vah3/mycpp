# pragma once

# include <iostream>
# include <vector>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &);
		Span &operator=(const Span &);
		~Span();

		void	addNumber(int);
		int		shortestSpan();
		int		longestSpan();
		void	addGroupNum(int);
		void	show();
	private:
		Span();
		unsigned int size;
		std::vector<int> store;
};
