#include <iostream>
#include <windows.h>
using namespace std;

// defini��o do registro
struct jogador
{
	char nome[40];
	float salario;
	unsigned gols;
};

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	jogador a = { "Bebeto", 200000, 600 };
	jogador b = { "Rom�rio", 300000, 800 };

	cout << "Contrata��es para o pr�ximo ano: " << a.nome << " e " << b.nome << "!" << endl;
	cout << "Pre�o da aquisi��o: R$" << a.salario + b.salario << "!" << endl;

	return 0;
}