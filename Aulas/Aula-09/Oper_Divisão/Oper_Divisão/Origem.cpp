// operador de divis�o
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	// sempre mostra 6 casas ap�s a v�rgula
	// cout.setf(ios_base::fixed, ios_base::floatfield)
	cout << fixed;

	cout << "Divis�o Inteira: 9/5 = " << 9 / 5 << endl;
	cout << "Divis�o Ponto-Flutuante: 9.0/5.0 = " << 9.0 / 5.0 << endl;
	cout << "Divis�o Mista: 9.0/5 = " << 9.0 / 5 << endl;

	cout << endl;

	cout << "Constantes double : 1e7/9.0 = " << 1e7 / 9.0 << endl;
	cout << "Constantes float: 1e7f/9.0f = " << 1e7f / 9.0f << endl;

	return 0;
}