// exerc�cio de aprendizagem 01
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite um n�mero: ";
	char num1[3];
	cin >> num1;

	cout << "Digite outro n�mero: ";
	int num2;
	cin >> num2;

	int N = atoi(num1); // conveter string para um inteiro

	int res = N * num2;
	cout << "O resultado da multiplica��o dos n�meros " << num1 << " e " << num2 << " � igual a " << res << endl;

	return 0;
}