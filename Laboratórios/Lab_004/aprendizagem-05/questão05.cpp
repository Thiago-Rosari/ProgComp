// Exercício de aprendizagem 05
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int absoluto(int n);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int abs,  res;
	cout << "Digite um número inteiro: ";
	cin >> abs;

	res = absoluto(abs);

	cout << "O valor absoluto é " << res << endl;

	return 0;
}

int absoluto(int n)
{
	return sqrt(pow(n, 2));
}