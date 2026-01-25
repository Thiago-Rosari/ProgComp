// Exercício de aprendizagem 01
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double Px, Py;
	double Qx, Qy;

	cout << "Insira as coordenadas dos pontos Px e Py: " << endl;
	cin >> Px;
	cin >> Py;
	cout << "Agora insira as coordenadas para Qx e Qy: " << endl;
	cin >> Qx;
	cin >> Qy;

	double distancia = sqrt(pow(Qx - Px, 2) + pow(Qy - Py, 2));

	cout << "Ponto P: " << endl;
	cout << Px << ", " << Py << endl;
	cout << "Ponto Q: " << endl;
	cout << Qx << ", " << Qy << endl;

	cout << "A distância entre P e Q é: " << distancia << endl;

	return 0;
}
