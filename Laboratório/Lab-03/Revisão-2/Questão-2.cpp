// exerc�cio de fixa��o 1
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Que horas s�o? ";
	int horas, mins;
	char pontos;

	cin >> horas;
	cin >> pontos;
	cin >> mins;

	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << mins << endl;

	return 0;
}