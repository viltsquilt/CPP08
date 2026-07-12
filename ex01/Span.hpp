#pragma once

#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>

class Span{
	private:
		std::vector<int>	_span;
		unsigned int		_N;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& orig);
		Span& operator=(const Span& orig);
		~Span();
		void	insertNumbers(std::vector<int> numbers);
		void	addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};
