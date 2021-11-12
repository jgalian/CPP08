#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vec {3, 63, -23, 67, 62, 34, 42, -356, 53, 67, 23, 15};
	std::list<int> lst {3, 63, -23, 67, 62, 34, 42, -356, 53, 67, 23, 15};

	std::cout << "/////////////////  VECTOR  ////////////////" << std::endl;

	try
	{
		int * match = easyfind(vec, 42);
		std::cout << "Value founded in address: " << match << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << '\n';
	}

	try
	{
		int * match = easyfind(vec, 11);
		std::cout << "Value founded in address: " << match << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << '\n';
	}

	std::cout << "//////////////////  LIST  /////////////////" << std::endl;

	try
	{
		int * match = easyfind(lst, 42);
		std::cout << "Value founded in address: " << match << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << '\n';
	}

	try
	{
		int * match = easyfind(lst, 11);
		std::cout << "Value founded in address: " << match << std::endl;
	}
	catch(const char * e)
	{
		std::cerr << e << '\n';
	}

	return (0);
}
