// exerc�cio de aprendizagem 03
#include <iostream>
#include <windows.h>
using namespace std;

double funcao(double[]);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double vet[3];

	cout << "Digite o valor para as 3 posi��es do vetor: \n";
	cin >> vet[0];
	cin >> vet[1];
	cin >> vet[2];

	cout << "O resultado da multiplica��o entre o primeiro e o �ltimo menos o termo do meio � = " << funcao(vet);
	cout << endl;

	return 0;
}

//***********************************************************************************************************

double funcao(double vet[])
{
	double result;
	result = ((vet[0] * vet[2]) - vet[1]);
	return result;
}