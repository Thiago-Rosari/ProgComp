// Exercício de fixação 02
#include <iostream>
using namespace std;

void temp(float);

int main()
{
	cout << "Digite uma temperatura em graus celsius: " << endl;
	float celsius;
	cin >> celsius;

	temp(celsius);
	
}

void temp(float graus)
{
	float Fah = 1.8 * graus + 32.0;
	cout << graus << " graus Celsius equivalem a " << Fah << " graus Fahrenheit." << endl;
}