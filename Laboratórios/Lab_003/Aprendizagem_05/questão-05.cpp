#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int hora;
	int minuto;
	char ponto;

	cout << "Que horas são? ";
	cin >> hora;
	cin >> ponto;
	cin >> minuto;

	cout << "O seu relógio está atrasado." << endl;
	cout << "Agora são " << hora + 1 << ponto << minuto << endl;


	return 0;
}