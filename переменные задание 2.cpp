#include <iostream>
#include <string>
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string string{};
	std::cout << "������� �����:";
	std::getline(std::cin >> std::ws, string);
	std::cout << "�� �����:" << string << std::endl;

	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
	return 0;
}