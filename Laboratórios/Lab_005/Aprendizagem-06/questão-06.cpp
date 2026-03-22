// Exercício de aprendizagem 06
#include <iostream>
#include <cmath>
using namespace std;

float angulo(float, float);
float vetor(float, float);

int main()
{
	cout << "Digite as coordenadas: " << endl;
	float x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << "Coordenadas polares do vetor: " << endl;
	cout << "(" << vetor(x, y) << ", " << angulo(x, y) << ")" << endl;

	return 0;
}

float angulo(float x, float y) {

	float radiano = atan2(y, x);
	float graus = radiano * (180 / 3.1415);

	return graus;
}

float vetor(float x, float y) {

	return sqrt(pow(x, 2) + pow(y, 2));
}