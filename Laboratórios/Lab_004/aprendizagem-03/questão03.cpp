// Exercício de aprendizagem 03
#include <iostream>
#include <windows.h>
using namespace std;

double media(double x, double y);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double num1, num2, res;
	

	cout << "Digite um valor inteiro: ";
	cin >> num1;
	cout << "Digite outro valor inteiro: ";
	cin >> num2;

	res = media(num1, num2);

	cout << "A média dos números é " << res;

	return 0;
}

double media(double x, double y)
{

	double res;

	res = (x + y) / 2;

	return res;
}