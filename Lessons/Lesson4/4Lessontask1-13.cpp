#include <iostream>

int main()
{
	int a = 5;
	int b = 2;
	int c = 26;
	std::cout << "a + b + c  = " << a + b + c  << "\n" << "a - b = " << a - b << "\n" << "a * b * c = "
		<< a * b * c << "\n" << "c / b = " << c / b << "\n";
	std::cout << "a % b = " << a % b << "\n";
	std::cout << "(((145 - 100 / 20) / 20) * 50) + 45 = " << (((145 - 100 / 20) / 20) * 50) + 45 << "\n";
	int var1 = 3;
	int var2 = 7;
	int var1_and_var2 = (var1 | var2);
	int var1_or_var2 = (var1 & var2);
	int var1_op1_var2 = (var1 ^ var2);
	int var1_op2_var2 = (var1 - var2);
	std::cout << "var1_and_var2 = " << var1_and_var2 << "\n"
		<< "var1_or_var2 = " << var1_or_var2 << "\n"
		<< "var1_op1_var2 = " << var1_op1_var2 << "\n"
		<< "var1_op2_var2 = " << var1_op2_var2 << "\n";

	int varop1 = (~var1);
	int varop2 = (var1 << 1);
	int varop3 = (var1 >> 1);
	std::cout << "(~var1) = " << varop1 << "\n"
		<< "(var1 << 1) = " << varop2 << "\n"
		"(var1 >> 1) = " << varop3 << "\n";

	bool b1 = true;
	bool b2 = false;
	bool result_of_bool_operation = b1 && (b1 && (b1 && b1 || b2) && (b2 || b1 != b2));
	std::cout << "true && (true && (true && true || false) && (false || true != false)) = " << result_of_bool_operation << "\n";

	bool b3 = 25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15)));
	std::cout << "25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15))) = " << b3 << "\n";
	std::cin.get();
	return 0;
}