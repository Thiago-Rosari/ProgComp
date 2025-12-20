// Entrada e saída de dados
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int cenouras;

	cout << "Quantas cenours você tem?" << endl;
	cin >> cenouras;

	cout << "Aqui estão mais duas. ";
	cenouras = cenouras + 2;

	cout << "Agora você tem " << cenouras << " cenouras." << endl;

	return 0;
}