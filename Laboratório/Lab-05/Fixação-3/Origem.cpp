// exerc�cio de fixa��o 03
#include <iostream>
#include <windows.h>
#include "harmonia.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float x, y;

	cout << "Que tal encontrar a m�dia harm�nica dos n�meros?" << endl;
	cout << "Vamos come�ar..." << endl;
	cout << endl;

	cout << "Entre com um n�mero: ";
	cin >> x;
	cout << "Entre com outro n�meros: ";
	cin >> y;
	cout << endl;

	float res = harmonic(x, y);

	cout << "A m�dia harm�nica dos n�meros � " << res << endl;


	return 0;
}