#include <iostream>
namespace MySpace
{
	int binsa(int a)
	{
		static int b = 0;
		std::cout << a + b << std::endl;
		b = a;
		return 0;
	}
}