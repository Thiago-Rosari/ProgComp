// operadores aritm�ticos
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float num1, num2;

	cout << "Entre com um n�mero: ";
	cin >> num1;
	cout << "Entre com outro n�mero: ";
	cin >> num2;

	cout << "num1 = " << num1 << "; num2 = " << num2 << endl;
	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 - num2 = " << num1 - num2 << endl;
	cout << "num1 * num2 = " << num1 * num2 << endl;
	cout << "num1 / num2 = " << num1 / num2 << endl;

	return 0;
}