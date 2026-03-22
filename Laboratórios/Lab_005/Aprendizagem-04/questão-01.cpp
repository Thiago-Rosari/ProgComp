// Exercício de aprendizagem 04
#include <iostream>
#include <cmath>
using namespace std;

float vetor(float, float);

int main()
{
	cout << "Digite as coordenadas do vetor:" << endl;
	float x, y;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << "O tamanho do vetor e " << vetor(x, y);

	return 0;
}

float vetor(float x, float y) {

	return sqrt(pow(x, 2) + pow(y, 2));
}