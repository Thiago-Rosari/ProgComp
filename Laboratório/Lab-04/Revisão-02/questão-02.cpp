// exerc�cio de revis�o 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	/*
	srand(time(NULL));
	cout << rand() << endl;
    */

	srand(time(NULL));

	int numero = rand();
	cout << "Gerando n�mero " << numero << endl;

	if (numero > 16834)
	{
		cout << "GRANDE" << endl;
	}
	else
	{
		cout << "pequeno" << endl;
	}

	return 0;
}