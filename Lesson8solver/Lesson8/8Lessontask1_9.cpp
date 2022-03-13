#include <iostream>
#include "Header_for_8Lessontask1_9.h"
// using namespace std;
#define Makros_for_sum(a, b) a+b;
using std::cout;

int main()
{
	MySpace::binsa(7);
	MySpace::binsa(9);
	MySpace::binsa(-7);
	MySpace::binsa(18);
	cout << Makros_for_sum(7, -5);
	std::cin.get();
	return 0;
}