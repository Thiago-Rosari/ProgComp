// exerc�cio de fixa��o 01
#include <iostream>
#include <windows.h>
using namespace std;

void horario(int, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Entre com o n�mero de horas: ";
	int hora;
	cin >> hora;

	cout << "entre com o n�mero de min�tos: ";
	int min;
	cin >> min;

	cout << "Agora s�o ";
	horario(hora, min);
	cout << endl;

	return 0;
}

//-------------------------------------------------------------

void horario(int hh, int mm)
{
	cout << hh << ":" << mm;
}