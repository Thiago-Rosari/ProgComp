// o tipo caractere
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char ch;   // declara uma vari�vel caractere

	cout << "Digite um caractere: " << endl;
	cin >> ch;

	cout << "Ol�!" << endl;
	cout << "Obrigado pelo caractere " << ch << "." << endl;


	return 0;
}