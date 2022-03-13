#include <iostream>

int main()
{
	setlocale(LC_ALL, "russian");
	std::cout << "¬ведите целое положительное число!" << std::endl;
	int num;
	int sum = 0;
	int i = 0;
	std::cin >> num;
	while (true)
	{
		if (num >= 0) break;
		else
		{
			std::cout << "¬ведите целое положительное число!" << std::endl;
			std::cin >> num;
		}
	}
	while (i < num)
	{
		sum += i;
		i++;
	}
	std::cout << "—умма чисел от 1 до " << num << " равно: " << sum << std::endl;

	int massiv[] = { 45, 2, -6, 8, 78, 15, -62, 23, 12, 99 };
	int sum_m = 0;
	for (i = 0; i < 10; i++)
	{
		// if (i % 2 == 1) { std::cout << massiv[i] << "\n"; }
		if (i % 2 == 0) { sum_m += massiv[i]; }

	}
	std::cout << "Cумма элементов массива, сто€щих на нечЄтных позици€х равно : " << sum_m << "\n";
	std::cin.get();
	return 0;


}
