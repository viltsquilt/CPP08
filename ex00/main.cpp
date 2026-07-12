#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	v1{1, 2, 3, 4};
	try
	{
		std::vector<int>::iterator it = easyfind(v1, 3);
		std::cout << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::array<int, 4>		a1{1, 2, 3, 4};
	try
	{
		std::array<int, 4>::iterator it = easyfind(a1, 4);
		std::cout << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::deque<int>		d1{1, 2, 3, 4};
	try
	{
		std::deque<int>::iterator it = easyfind(d1, 1);
		std::cout << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
