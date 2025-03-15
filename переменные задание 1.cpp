#include <iostream>
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num{};

	std::cout << "Введите число:";
	std::cin >> num;
	std::cout << "Вы ввели:" << num << std::endl;

	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
	return 0;
}
