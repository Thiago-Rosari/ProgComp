// exerc�cio de aprendizagem 01
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int hora1, hora2, min1, min2, HoraFinal, MinFinal;
	char pontos;

	cout << "Digite o hor�rio de partida (HH:MM): ";//ENTRADA DO HOR�RIO DE PARTIDA
	cin >> hora1;
	cin >> pontos;
	cin >> min1;

	cout << "Digite o hor�rio de chegada (HH:MM): "; //ENTRADA DO HOR�RIO DE CHEGADA
	cin >> hora2;
	cin >> pontos;
	cin >> min2;
	cout << "\n";


	//C�LCULO DAS HORAS E MINUTOS FINAIS
	HoraFinal = (hora2 - hora1);
	MinFinal = (min2 - min1);


	if (MinFinal < 0)//C�LCULO DA DIFEREN�A ENTRE OS HOR�RIOS
	{
		HoraFinal = HoraFinal - 1;  // tira uma hora
		MinFinal = MinFinal + 60;  // adiciona 60 minutos
	}

	cout << "O tempo total de viagem foi de " << HoraFinal << " horas e " << MinFinal << " min.";//SA�DA DO PROGRAMA

	return 0;
}