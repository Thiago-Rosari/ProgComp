// Exercício de fixação 02
#include <iostream>
#include <windows.h>
using namespace std;

//--------------------------------------------------
void linha(void);
void pequena(void);
void media(void);
void grande(void);
//--------------------------------------------------

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	pequena();
	media();
	grande();
	cout << "Programação de Computadores." << endl;
	grande();
	media();
	pequena();

	return 0;
}

//-------------------------------------------------
void linha(void)
{
	cout << "----------";
}

void pequena(void)
{
	linha();
	cout << endl;
}

void media(void)
{
	linha();
	linha();
	cout << endl;
}

void grande(void)
{
	linha();
	linha();
	linha();
	cout << endl;
}