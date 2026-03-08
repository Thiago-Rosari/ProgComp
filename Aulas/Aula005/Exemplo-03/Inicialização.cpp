#include <iostream>
#include <windows.h>
using namespace std;

int converte(int);		// protótipo da função

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	cout << "Entre com a distância em metros: ";
	int num;
	cin >> num;

	int centimetro = converte(num);		 // inicializando com uma função

	cout << num << " metros é igual a " << centimetro << " centímetros." << endl;

	return 0;
}

int converte(int n)		// definição da função
{
	int valor = 100 * n;
	return valor;
}