// convers�es na atribui��o
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	//cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << fixed;

	float tres = 3;          // int convertido para float
	int aposta = 3.9832;     // double convertido para int
	int debito = 7.2E12;     // resultado n�o definido

	cout << "tr�s = " << tres << endl;
	cout << "aposta = " << aposta << endl;
	cout << "d�bito = " << debito << endl;
	

	return 0;
}