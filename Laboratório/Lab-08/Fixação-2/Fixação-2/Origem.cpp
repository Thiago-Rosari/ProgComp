// exerc�cio de fixa��o 02
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	cout << "Digite um n�mero real: ";
	float num;
	cin >> num;

	cout << "Nota��o padr�o: " << num << endl;

	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Nota��o cient�fica: " << num << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Nota��o decimal: " << num << endl;



	return 0;
}