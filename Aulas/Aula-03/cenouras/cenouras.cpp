// cenouras.cpp - processamento de comida
#include <iostream>
using namespace std;

int main()
{
	int cenouras;              // declara uma vari�vel inteira
	cenouras = 25;             // atribui um valor a uma vari�vel

	cout << "Eu tenho ";
	cout << cenouras;         // exibe o valor da vari�vel
	cout << " cenouras.";
	cout << endl;

	cenouras = cenouras - 1;   // modifica a vari�vel
	cout << "Agora eu tenho " << cenouras << " cenouras." << endl;

	return 0;
}