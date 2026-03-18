// Exercício de revisão 01 - versão 1
#include <iostream>
using namespace std;

void alarme();
int LerSenha();

int main()
{
	cout << "Iniciando..." << endl;
	alarme();
	cout << "Senha: ";
	int senha = LerSenha();

	cout << "Finalizando..." << endl;
	alarme();
}

void alarme()
{
	cout << '\a';
}

int LerSenha()
{
	int numero;
	cin >> numero;
	return numero;
}