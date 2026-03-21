// Exercício de aprendizagem 02
#include <iostream>
using namespace std;

float salario(float);

int main()
{
	cout << "Salario atual: ";
	float atual;
	cin >> atual;

	cout << "Salario ajustado para " << salario(atual);


	return 0;
}

float salario(float aument) {
	float novo, porcent;

	porcent = 0.15 * aument;
	novo = aument + porcent;

	return novo;
}