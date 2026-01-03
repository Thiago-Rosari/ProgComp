#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	float comprimento;
	float largura;
	float altura;

	cout << "Digite a altura, largura e comprimento: \n";
	cin >> altura >> largura >> comprimento;

	float volume = altura * largura * comprimento;

	cout << "O volume é igual a: " << volume << endl;
}