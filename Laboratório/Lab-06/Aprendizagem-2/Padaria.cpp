// exerc�cio de aprendizagem 02
#include <iostream>
#include <windows.h>
using namespace std;

#define pao 0.30
#define pastel 0.25

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float Paes, Past;

	cout << "===== P�es&Cia =====" << endl;
	cout << endl;

	cout << "Quantos p�es? ";
	cin >> Paes;
	cout << "Quantos past�is? ";
	cin >> Past;

	float quant1, quant2, total;

	quant1 = pao * Paes;
	quant2 = pastel * Past;

	total = quant1 + quant2;

	cout << "O total das compras � R$" << total << endl;

	return 0;
}