// exerc�cio de aprendizagem 02
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num1, num2;

	cout << "Digite dois n�meros inteiros: " << endl;
	cin >> num1;
	cin >> num2;

	int divs = num1 / num2;
	cout << "O quociente " << num1 << "/" << num2 << " � " << divs << endl;

	int modl = num1 % num2;
	cout << "O resto da divis�o " << num1 << "%" << num2 << " � " << modl << endl;

	return 0;
}