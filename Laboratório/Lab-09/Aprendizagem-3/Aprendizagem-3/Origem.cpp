// exerc�cio de aprendizagem 03
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float real;
	cout << "Digite um n�mero real: ";
	cin >> real;

	int inteiro = real;
	cout << "A aprte inteira: " << inteiro << endl;

	float fracio = real - inteiro;
	cout << "A parte fracion�ria: " << fracio << endl;

	return 0;
}