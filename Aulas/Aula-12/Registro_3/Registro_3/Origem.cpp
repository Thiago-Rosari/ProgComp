#include <iostream>
#include <Windows.h>
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

	// inicializando vetor de registro
	jogador equipe[22] =
	{
		{"Bebeto", 200000, 182},
		{"Rom�rio", 300000, 178}
	};

	cout << "Contrata��es para o pr�ximo ano: " << equipe[0].nome << " e " << equipe[1].nome << "!" << endl;
	cout << "Pre�o da aquisi��o: R$" << equipe[0].salario + equipe[1].salario << "!" << endl;

	return 0;
}