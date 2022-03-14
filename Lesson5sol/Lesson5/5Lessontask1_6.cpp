#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	std::cout << "Введите два числа!" << "\n";
	float x, y;
	std::cin >> x;
	std::cin >> y;
	std::cout << "First number : " << x << "\n"
		<< "Second number : " << y << "\n";
	std::cout << "среднее арифметическое чисел a и b равно : " << (x + y) / 2 << "\n";
	std::cout << "Введите знак операции +, -, * или /" << "\n";
	char operation;
	std::cin >> operation;
	if (operation == '+') {
		float result = x + y;
		std::cout << x << operation << y << " = " << result << "\n";
	}
	else if (operation == '-') {
		float result = x - y;
		std::cout << x << operation << y << " = " << result << "\n";
	}
	else if (operation == '*') {
		float result = x * y;
		std::cout << x << operation << y << " = " << result << "\n";
	}
	else if (operation == '/') {
		float result = x / y;
		std::cout << x << operation << y << " = " << result << "\n";
	}
	else {
		std::cout << "Вы вывели не подходящый знак!";

	}
	float result;
	switch (operation)
	{
	case '+':
		result = x + y;
		std::cout << x << operation << y << " = " << result << "\n";
		break;
	case '-':
		result = x - y;
		std::cout << x << operation << y << " = " << result << "\n";
		break;
	case '*':
		result = x * y;
		std::cout << x << operation << y << " = " << result << "\n";
		break;
	case '/':
		result = x / y;
		std::cout << x << operation << y << " = " << result << "\n";
		break;
	default:
		std::cout << "Вы вывели не подходящый знак!";
	}
}
