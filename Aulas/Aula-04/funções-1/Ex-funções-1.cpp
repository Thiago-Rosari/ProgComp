// exemplo do uso de fun��es
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite a �rea da sua casa em metros quadrados: ";
	double area;
	cin >> area;

	double lado;
	lado = sqrt(area);  // chamada da fun��o sqrt]

	cout << "Isso � equivalente a um quadrado com " << lado << " metros de lado." << endl;



	return 0;
}