// exeerc�cio de fixa��o 01
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x1, x2;

	cout << "Digite o valor x1: ";
	cin >> x1;
	cout << "Digite o valor x2: ";
	cin >> x2;

	int resultado = int(x1) + int(x2);
	cout << "A adi��o dos valores � " << resultado << endl;

	return 0;
}