// Exercício de revisão 01 - versão 2
#include <iostream>
using namespace std;

void alarme();
int LerSenha();
void final();

int main()
{
	alarme();
	LerSenha();
	final();
}

void alarme()
{
	cout << "Iniciando..." << endl;
	cout << '\a';
}

int LerSenha()
{
	cout << "Senha: ";
	int senha;
	cin >> senha;
	return senha;
}

void final()
{
	cout << "Finalizando..." << endl;
	cout << '\a';
}