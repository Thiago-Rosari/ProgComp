// Exercício de aprendizagem 04
#include <iostream>
#include <windows.h>
using namespace std;

double VolumeCilindro(double num1, double num2);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double base, altura, cilindro;

	cout << "Calcula o Volume de um Cilindro" << endl;
	cout << "-------------------------------" << endl;
	cout << "Entre com o raio da base: ";
	cin >> base;
	cout << "Entre com a altura: ";
	cin >> altura;

	cilindro = VolumeCilindro(base, altura);

	cout << "O valor do cilindro é " << cilindro << endl;

	return 0;
}

double VolumeCilindro(double num1, double num2)
{
	double res;
	double pi = 3.1415;

	res = pi * num1 * num1 * num2;

	return res;
}