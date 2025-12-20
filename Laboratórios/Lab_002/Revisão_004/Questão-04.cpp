// Exercício de revisão 04
#include <iostream>
using namespace std;

int main()
{
	// alterando o código de página silenciosamente
	system("chcp 1252 > nul");
	
	// exibindo uma frase que contém acentos
	cout << "acentuação é possível?" << endl;

	// leia uma palavra que contém acentos
	char palavra[40];
	cin >> palavra;

	// exibindo o que foi lido
	cout << palavra << endl;

	return 0;
}