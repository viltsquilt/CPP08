#include "Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N): _span(NULL), _N(N)
{

}

Span::Span(const Span& orig) : _span(orig._span), _N(orig._N)
{

}

Span&	Span::operator=(const Span& orig)
{
	if (this != &orig)
	{
		_span = orig._span;
		_N = orig._N;
	}
	return (*this)
}

void	Span::insertNumbers(std::vector<int> numbers)
{
	if ((_span.size() + numbers.size()) > N)
	{
		throw std::out_of_range("not enough space!");
	}
	else
	{
		_span.insert(span.end(), numbers.begin(), numbers.end());
	}
}

void	Span::addNumber(int num)
{
	if (_span.size() < N)
		_span.push_back(num);
	else
		throw std::out_of_range("not enough space!");
}

unsigned int	shortestSpan()
{
	if (_span.empty() || _span.size() == 1)
		std::out_of_range("not enough numbers!");
	sort(_span.begin(), _span.end());
	unsigned int	shortest = std::numeric_limits<unsigned int>::max();
	for (std::vector<int>::iterator it = _span.begin(); it + 1 != _span.end(); it++)
	{
		unsigned int	dif = *(it + 1) - *it;
		if (dif < shortest)
			shortest = dif;
	}
	return (shortest);
}

unsigned int	longestSpan()
{
	if (_span.empty() || _span.size() == 1)
		std::out_of_range("not enough numbers!");
	sort(_span.begin(), _span.end());
	return *(_span.end() - 1) - _span.begin();
}

Span::~Span()
{

}
