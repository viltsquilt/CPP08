#include "Span.hpp"

int	main(void)
{
	try
	{
		int num = 10000;
		Span s = Span(num + 1);
		s.addNumber(-10);
		Span s2(s);
		for (int i = 0; i < num; i++)
		{
			s.addNumber(i);
		}
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
		std::vector v = {220, 300, 1};
		s2.insertNumbers(v);
		std::cout << s2.shortestSpan() << std::endl;
		std::cout << s2.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
