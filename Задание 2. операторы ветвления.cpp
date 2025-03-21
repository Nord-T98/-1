#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int a, b, c;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;

    int max = (a > b ? (a > c ? a : c) : (b > c ? b : c));

    int min = (a < b ? (a < c ? a : c) : (b < c ? b : c));

    int mid = (a + b + c) - max - min;

    cout << "Результат: " << max << " " << mid << " " << min;

    return 0;
}
