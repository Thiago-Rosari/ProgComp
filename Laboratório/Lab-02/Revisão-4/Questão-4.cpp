// quest�o de revis�o 4
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	// exibindo uma frase que cont�m acentos
	cout << "Acentua��o � poss�vel?" << endl;

	// leia uma palavra que cont�m acentos
	char palavra[40];
	cin >> palavra;

	// exibindo o que foi lido
	cout << palavra << endl;

	return 0;
}