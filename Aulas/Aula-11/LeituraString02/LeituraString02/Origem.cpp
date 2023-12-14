#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	const int TamVet = 20;

	char nome[TamVet];
	char sobremesa[TamVet];

	cout << "Entre com seu nome: " << endl;
	cin.getline(nome, TamVet);  // l� a linha inteira at� dar 'enter'
	//cin >> nome;   // l� apenas uma palavra

	cout << "Entre com sua sobremesa favorita: " << endl;
	cin.getline(sobremesa, TamVet);
	//cin >> sobremesa;

	cout << "Eu tenho um " << sobremesa;
	cout << " para voc�, " << nome << endl;

	return 0;
}

/******************************************************************************
// A fun��o cin.getline() l� uma linha
// at� o caractere de nova linha (\n)
//
// char estado[80];
// cin.getline(estado, 80);  => l� at� 79 caracteres ( e insere '\n')
//
******************************************************************************/