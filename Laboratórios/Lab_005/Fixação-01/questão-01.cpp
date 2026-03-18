// Exercício de fixação 01
#include <iostream>
#include <windows.h>
using namespace std;

void horas(int, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num1, num2;
	cout << "Entre com o número de horas: " << endl;
	cin >> num1;
	cout << "Entre com o número de minutos: " << endl;
	cin >> num2;
	horas(num1, num2);
	

	return 0;
}

void horas(int hs, int mn) {

	 cout << "Agora são " << hs << ":" << mn << endl;
}