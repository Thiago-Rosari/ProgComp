// Exercício de aprendizagem 03
#include <iostream>
using namespace std;

float indice(float, float);

int main()
{
	float altura, massa, imc;
	cout << "Indice de Massa Corporal (IMC)" << endl;
	cout << "------------------------------" << endl;

	cout << "Altura: ";
	cin >> altura;
	cout << "Peso: ";
	cin >> massa;

	imc = indice(massa, altura);

	cout << "IMC: " << imc;

	return 0;
}

float indice(float peso, float alt)
{
	float calc = peso / (alt * alt);

	return calc;
}