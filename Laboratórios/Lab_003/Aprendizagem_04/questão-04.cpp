#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float distribuidor;
	float imposto;
	float fabrica;
	float total;

	cout << "Custo de fábrica: ";
	cin >> fabrica;

	distribuidor = 28.0 / 100.0 * fabrica;
	imposto = 45.0 / 100.0 * fabrica;

	total = distribuidor + imposto + fabrica;

	cout << "O custo ao consumidor é de R$ " << total << endl;


	return 0;
}