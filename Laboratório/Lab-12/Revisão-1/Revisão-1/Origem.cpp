// exerc�cio de revis�o 01
#include <iostream>
#include <windows.h>
using namespace std;

// defini��o do registro
struct complexo
{
	float real;
	float img;
};

// prot�tipo da fun��o
complexo soma(complexo, complexo);
void exibir(complexo);
complexo ler();

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite os complexos: " << endl;
	complexo c1 = ler();
	complexo c2 = ler();
	complexo res = soma(c1, c2);
	exibir(res);

	return 0;
}

//*************************************************************************************************************************

// defini��o da fun��o
complexo soma(complexo a, complexo b)
{
	complexo c;

	c.real = a.real + b.real;
	c.img = a.img + b.img;

	return c;
}

void exibir(complexo c)
{
	cout << c.real << showpos << c.img << noshowpos << "i" << endl;
}

complexo ler()
{
	complexo temp;
	cin >> temp.real;
	cin >> temp.img;
	cin.ignore();

	return temp;
}