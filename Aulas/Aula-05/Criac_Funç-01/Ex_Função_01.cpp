#include <iostream>
#include <windows.h>
using namespace std;

void flexao(int);   // prot�tipo da fun��o

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	flexao(3);    // chamada da fun��o
	cout << "Escolha um n�mero inteiro: ";
	int cont;
	cin >> cont;

	flexao(cont);     // chama a fun��o 'flexao' novamente

	return 0;
}

void flexao(int n)
{
	cout << "Fa�a " << n << " flex�es." << endl;
}