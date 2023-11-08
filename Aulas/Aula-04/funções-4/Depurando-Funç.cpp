// Depurando fun��es 2
#include <iostream>
#include <windows.h>
using namespace std;

//-----------------------------------------------
// prot�tipos

void auxiliar(void);
void outra(void);

//-----------------------------------------------
// fun��o principal

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Um programa em C++, "
		 << "sempre come�a pela "
		 << "fun��o main. "
		 << endl;

	outra();
	auxiliar();

	cout << "mais de uma vez." << endl;

	return 0;
}

//------------------------------------------------
// defini��o das fun��es

void auxiliar(void)
{
	cout << "Fun��es tamb�m podem "
	   	 << "ser invocadas ";
}

void outra(void)
{
	cout << "Fun��es podem ser "
		 << "invocadas a partir "
		 << "da fun��o main."
		 << endl;

	auxiliar();

	cout << "a partir de "
		 << "outras fun��es."
		 << endl;
}