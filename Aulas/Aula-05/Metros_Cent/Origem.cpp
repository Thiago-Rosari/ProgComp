#include <iostream>
#include <windows.h>
#include "Converte.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Entre com a dist�ncia em metros: ";
	float num;
	cin >> num;

	float cent = converte(num);  // inicializando com uma fun��o

	cout << num << " metros = " << cent << " cent�metros." << endl;

	return 0;
}