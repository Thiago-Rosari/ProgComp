// declarando, definindo e chamando uma fun��o
#include <iostream>
#include <windows.h>
using namespace std;

void simples();   // prot�tipo da fun��o

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "main() vai chamar a fun��o simples():" << endl;
	simples();  // chamada da fun��o

	return 0;

}

//======================================================================================

void simples()   // defini��o da fun��o
{
	cout << "Eu sou uma fun��o simples" << endl;
}