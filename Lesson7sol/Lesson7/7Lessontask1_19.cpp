#include <iostream>

int summu(int number = 1)
{
	int sum = 0;
	if (number <= 0) return 0;
	else
	{
		for (int i = 0; i <= number; i++)
		{
			sum += i;
		}
		std::cout << sum << "\n";
	}

}


int newfunc(int a, int b, int c, int d)
{
	c = a + b;
	d = a * b;
	std::cout << c << "\n" << d << "\n";
	return c;
}
int main()
{
	int arrive[2][3] = { {2, 7, 9}, {-5, -19, 0} };
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arrive[i][j];

		}

	}
	std::cout << sum << "\n";
	std::cout << "-----------------------" << "\n";
	int arr[3];
	for (int j = 0; j < 3; j++)
	{
		int sum = 0;
		for (int i = 0; i < 2; i++)
		{
			sum += arrive[i][j];
		}
		arr[j] = sum;
		std::cout << arr[j] << " ";
	}
	std::cout << "-----------------------" << "\n";
	float var1 = 20.84f;
	std::cout << var1 << "\n";
	float& a = var1;
	a = 19.056f;
	std::cout << a << "\n" << var1 << "\n";

	std::cout << "-----------------------" << "\n";

	summu();
	int c = 10;
	int d = 12;
	newfunc(2, 3, c, d);

	std::cout << c << "\n" << d << "\n";

	std::cout << "-----------------------" << "\n";

	char abc = '#';
	std::cout << abc << "\n";

	std::cout << "-----------------------" << "\n";
	for (int i = 0; i < 3; i++)
	{
		bool b1 = true;
		std::cout << abc << "\n";
		std::cout << b1 << "\n";
	}
	std::cin.get();
	return 0;

}