#include <iostream>
#include <windows.h>
using namespace std;

void auxiliar(void);
void outra(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Um programa em C++, sempre começa pela função main." << endl;

	outra();
	auxiliar();

	cout << "mais de uma vez." << endl;

	return 0;
}

void auxiliar(void)
{
	cout << "Funções também podem ser invocadas ";
}

void outra(void)
{
	cout << "Funções podem ser invocadas a partir da função main." << endl;

	auxiliar();

	cout << "a partir de outras funções." << endl;
}