// Exercício de aprendizagem 03
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	cout << left; cout.width(11); cout << "Produto";
	cout << right; cout.width(6); cout << "Preço/kg"; 
	cout << right; cout.width(16); cout << "Pedido (kg)";
	cout.width(16); cout << "Total Percial" << endl;

	cout << left; cout.width(11); cout << "---------";
	cout << right; cout.width(6); cout << "---------";
	cout << right; cout.width(13); cout << "---------";
	cout.width(17); cout << "------------" << endl;

	cout << left; cout.width(11); cout << "Alface";
	cout << right; cout.width(6); cout << "R$ 1,25/kg";
	cout << right; cout.width(8); cout << "3,2kg";
	cout.width(16); cout << "R$ 4,00" << endl;

	cout << left; cout.width(11); cout << "Beterraba";
	cout << right; cout.width(6); cout << "R$ 0,65/kg"; 
	cout << right; cout.width(8); cout << "6,0kg";
	cout.width(16); cout << "R$ 3,90" << endl;

	cout << left; cout.width(11); cout << "Cenoura";
	cout << right; cout.width(6); cout << "R$ 0,99/kg";
	cout << right; cout.width(7); cout << "10kg";
	cout.width(17); cout << "R$ 9,00" << endl;
}