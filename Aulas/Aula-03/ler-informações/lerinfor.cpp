// lerinfor.cpp - entrada e sa�da de dados
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int cenouras;

	cout << "Quantas cenouras voc� tem?" << endl;
	cin >> cenouras;    // entrada de dados

	cout << "Aqui est�o mais duas. ";
	cenouras = cenouras + 2;

	// concatena a sa�da
	cout << "Agora voc� tem " << cenouras << " cenouras." << endl;

	return 0;
}