// exemplo do uso de funçoes
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite a área da sua casa em metros quadrados: ";
	double area;
	cin >> area;

	double lado;
	lado = sqrt(area);  // chamada da função sqrt

	cout << "Isso é o equivalente a um quadrado com lado de " << lado << " metros." << endl;

	system("pause");  // chamada da função system
}