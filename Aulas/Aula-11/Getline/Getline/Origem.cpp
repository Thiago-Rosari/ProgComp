#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Em que ano sua casa foi constru�da? " << endl;
	int ano;
	cin >> ano;
	cin.ignore();  // elimina um ou mais caracteres do cin
	//cin.get();  // caractere '\n' lido e descartado

	cout << "Qual � o seu endere�o? " << endl;
	char endere�o[80];
	cin.getline(endere�o, 80);

	cout << "Ano de constru��o: " << ano << endl;
	cout << "Endere�o: " << endere�o << endl;
	cout << "Pronto" << endl;

	return 0;
}