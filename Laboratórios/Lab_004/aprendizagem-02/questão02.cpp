// Exercício de aprendizagem 02
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double angulo;
	double seno;

	cout << "Digite um ângulo: ";
	cin >> angulo;

	double resultado = angulo * (3.1415 / 180.0);

	seno = sin(resultado);

	cout << "Seno = " << seno << endl;


	return 0;
}