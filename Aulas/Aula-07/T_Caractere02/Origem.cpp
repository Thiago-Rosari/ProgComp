// o tipo caractere e o tipo inteiro
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char ch = 'M';  // atribui c�digo ASCII do M
	int i = ch;     // armazena mesmo c�digo num int

	cout << "O c�digo ASCII para " << ch << ": " << i << endl;

	cout << "Adicionando 1 ao c�digo caractere..." << endl;
	ch = ch + 1;
	i = ch;

	cout << "O c�digo ASCII para " << ch << ": " << i << endl;

	return 0;
}