// exerc�cio de aprendizagem 5
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	int horas, minutos, novaH;
	char ponto = ':';

	cout << "Que horas s�o? " << endl;
	cin >> horas;
	cin >> minutos;
	novaH = horas + 1;

	cout << "O seu rel�gio est� atrasado." << endl;
	cout << "Agora s�o " << novaH << ponto << minutos << endl;



	system("pause");
	return 0;
}