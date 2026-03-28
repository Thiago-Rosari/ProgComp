// Exercício de aprendizagem 07
#include <iostream>
using namespace std;

float quadrado(float);
float cubo(float);

int main()
{
	float valor;
	cout << "Digite um valor: " << endl;
	cin >> valor;

	cout << "Quadrado = " << quadrado(valor) << endl;
	cout << "Cubo = " << cubo(valor) << endl;
	cout << "Cubo do quadrado = " << cubo(quadrado(valor)) << endl;
}

float quadrado(float num1) {
	float res = num1 * num1;

	return res;
}

float cubo(float num2) {
	float rest = num2 * num2 * num2;

	return rest;
}