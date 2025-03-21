#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool a = true;
	bool b = true;
	cout << "Оператор: ||" << endl;
	cout << " " << endl;
	cout << boolalpha << a << "  || " << b << " = " << (a || b) << endl;

	bool q = false;
	bool w = true;
	cout << boolalpha << q << " || " << w << " = " << (q || w) << endl;

	bool e = true;
	bool r = false;
	cout << boolalpha << e << "  || " << r << " = " << (e || r) << endl;

	bool t = false;
	bool y = false;
	cout << boolalpha << t << " || " << y << " = " << (t || y) << endl;
	cout << " " << endl;

	cout << "Оператор: &&" << endl;

	bool f = true;
	bool g = true;
	cout << boolalpha << f << "  && " << g << " = " << (f && g) << endl;

	bool h = false;
	bool j = true;
	cout << boolalpha << h << " && " << j << " = " << (h && j) << endl;

	bool k = true;
	bool l = false;
	cout << boolalpha << k << "  && " << l << " = " << (k && l) << endl;

	bool n = false;
	bool m = false;
	cout << boolalpha << n << " && " << m << " = " << (n && m) << endl;

    return 0;
}
