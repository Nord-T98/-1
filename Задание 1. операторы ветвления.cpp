#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string result = a >= 0 ? "positive" : "negative";
	std::cout << result << std::endl;

	return 0;

} 