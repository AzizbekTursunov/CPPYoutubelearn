#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	int x;
	x = 150;
	std::cout << x << '\n';

	float y;
	y = 15.933f;
	std::cout << y << '\n';

	short ab;
	ab = 250;
	std::cout << ab << '\n';
	int databirthdayday = 7;
	std::string databirthdaymonth = "мая";
	int databirthdayyear = 2003;

	std::cout << databirthdayday;
	std::cout << databirthdaymonth;
	std::cout << databirthdayyear << "\n";

	std::cout << "Моя дата рождения " << databirthdayday << databirthdaymonth << databirthdayyear << " года" << "\n";

	const float num = 2.3f;
	const std::string str = "WINDOWS";
	std::cout << num << " " << str;
	std::cin.get();
	return 0;
}