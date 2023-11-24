// exerc�cio de aprendizagem 2
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);



	cout << "Digite um �ngulo: ";

	double angulo;
	cin >> angulo;

	double pi = atan(1) * 4;  // atan(1) * 4 -- formula para definir o valor de PI

	angulo = (angulo * pi ) / 180;

	double res;

	res = sin(angulo);

	cout << "Seno = " << res << endl;



	return 0;
}

/*============================================================================================
	Na programa��o, os valores em �ngulos devem ser convertidos para radianos:
	ex:
	180� -> Pi radianos
-------------------------------
	ang�  ----> x radianos

	f�rmula:
	x = ang * Pi / 180
============================================================================================*/