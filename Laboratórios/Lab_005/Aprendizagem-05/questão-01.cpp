// Exercício de aprendizagem 05
#include <iostream>
#include <cmath>
using namespace std;

float angulo(float, float);

int main()
{
	cout << "Digite as coordenadas: " << endl;
	float x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << "O angulo do vetor e " << angulo(x, y) << endl;


	return 0;
}

float angulo(float x, float y) {

	float radiano = atan2(y, x);
	float graus = radiano * (180 / 3.1415);

	return graus;
}