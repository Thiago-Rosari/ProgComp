// exerc�cio de aprendizagem 1
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float anos, PorDia, valor, soma, total;

	cout << "A quantos anos voc� fuma? " << endl;
	cin >> anos;
	cout << "Quantos cigarros voc� fuma por dia? " << endl;
	cin >> PorDia;
	cout << "Qual o pre�o m�dio de uma carteira de cigarro? " << endl;
	cin >> valor;

	anos = anos * 365;            // 3.650
	PorDia = 20 / PorDia;         // 4
	soma = anos / PorDia;         // 912,5
	total = valor * soma;         // 5931,25


	cout << "Voc� gastou at� agora R$ " << total << " com cigarros." << endl;
	return 0;
}