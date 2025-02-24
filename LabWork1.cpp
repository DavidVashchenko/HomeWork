#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n, num, digit, rev = 0;
	cout << "Введите число: ";
	cin >> num; n = num;
	do
	{
		digit = num % 10; rev = (rev * 10) + digit; num = num / 10;
	} while (num != 0);
	cout << "Перевёрнутое число: " << rev << endl;

	if (n == rev) cout << "Число является палиндромом";
	else cout << "Число не является палиндромом";

	return 0;
}