#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	std::cout << "������� ��� �����!" << "\n";
	float x, y;
	std::cin >> x;
	std::cin >> y;
	std::cout << "First number : " << x << "\n"
		<< "Second number : " << y << "\n";
	std::cout << "������� �������������� ����� a � b ����� : " << (x + y) / 2 << "\n";
	std::cout << "������� ���� �������� +, -, * ��� /" << "\n";
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
		std::cout << "�� ������ �� ���������� ����!";

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
		std::cout << "�� ������ �� ���������� ����!";
	}
}
