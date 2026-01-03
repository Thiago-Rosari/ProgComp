#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*
		E = METS x PESO x (tempo de atividade / 60)
		* ciclismo = 7.0 mets
		* corrida  = 7.0 mets
		* natação  = 8.0 mets
	*/

	float quilos;
	float corrida;
	float ciclismo;
	float natação;
	float total_calorias;

	cout << "Digite seu peso em quilos: ";
	cin >> quilos;
	cout << "Digite o tempo de corrida em minutos: ";
	cin >> corrida;
	cout << "Digite o tempo de ciclismo em minutos: ";
	cin >> ciclismo;
	cout << "Digite o tempo de natação em minutos: ";
	cin >> natação;

	corrida = 7.0 * quilos * (corrida / 60);
	ciclismo = 7.0 * quilos * (ciclismo / 60);
	natação = 8.0 * quilos * (natação / 60);

	total_calorias = corrida + ciclismo + natação;

	cout << "Você gastou um total de " << total_calorias << " calorias." << endl;

	return 0;
}