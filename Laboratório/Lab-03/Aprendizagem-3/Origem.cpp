// exerc�cio de aprendizagem 3
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float peso, corrida, ciclismo, nata��o, total, calc1, calc2, calc3;

	cout << "Digite seu peso em quilos: " << endl;
	cin >> peso;
	cout << "Digite o seu tempo de corrida em minutos: " << endl;
	cin >> corrida;
	cout << "Digite o seu tempo de ciclismo em minutos: " << endl;
	cin >> ciclismo;
	cout << "Digite o seu tempo de nata��o em minutos: " << endl;
	cin >> nata��o;

	calc1 = 7 * peso * corrida / 60;
	calc2 = 7 * peso * ciclismo / 60;
	calc3 = 8 * peso * nata��o / 60;

	total = calc1 + calc2 + calc3;

	cout << "Voc� gastou um total de " << total << "calorias." << endl;

	return 0;
}