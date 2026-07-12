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

}

unsigned int	longestSpan()
{

}

Span::~Span()
{

}
