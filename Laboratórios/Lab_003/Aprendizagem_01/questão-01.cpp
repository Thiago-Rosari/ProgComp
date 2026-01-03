#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float anos;
	float cigarros;
	float QuantPorAno;
	float valor_carteira;
	float gastos;

	cout << "A quantos anos você fuma? ";
	cin >> anos;

	cout << "Quantos cigarros você fuma por dia? ";
	cin >> cigarros;

	cout << "Qual o preço médio de uma carteira de cigarro? ";
	cin >> valor_carteira;

	//-------------------------------------------------------------------------------
	anos = anos * 365;					// 3650.0 tottal de dez anos
	cigarros = 20 / cigarros;
	
	QuantPorAno = anos / cigarros;

	gastos = QuantPorAno * valor_carteira;


	cout << "Você gastou até agora R$ " << gastos << " com cigarros." << endl;

	return 0;
}