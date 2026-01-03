#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Que horas são? \n";
	int horas, minutos;
	char pontos;

	cin >> horas;
	cin >> pontos;
	cin >> minutos;

	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << minutos << endl;

	return 0;
}