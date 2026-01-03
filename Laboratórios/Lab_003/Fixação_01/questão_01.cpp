#include <iostream>
using namespace std;

int main()
{
	int segundos, minutos;

	cout << "Digite uma quantidade de minutos: " << endl;
	cin >> minutos;

	segundos = 60 * minutos;

	cout << "Existem " << segundos << " segundos em " << minutos << " minutos." << endl;

	return 0;
}