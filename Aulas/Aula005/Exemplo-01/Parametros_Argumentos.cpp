#include <iostream>
#include <windows.h>
using namespace std;

void flexao(int);    // protótipo da função flexao

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	flexao(3);      // chama a função flexao
	cout << "Escolha um número inteiro: ";
	int cont;
	cin >> cont;
	flexao(cont);   // cha,a flexao novamente
	return 0;
}

void flexao(int n)
{
	cout << "Faça " << n << " flexões." << endl;
}