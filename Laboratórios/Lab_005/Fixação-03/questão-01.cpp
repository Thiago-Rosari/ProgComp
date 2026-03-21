// Exercício de fixação 03
#include <iostream>
using namespace std;

float harmonia(float, float);

int main()
{
	float num1, num2;

	cout << "Entre com um numero: ";
	cin >> num1;
	cout << "Entre com outro numero: ";
	cin >> num2;

	cout << "A media harmonica dos numeros e " << harmonia(num1, num2) << endl;

	return 0;
}
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

float harmonia(float x, float y)
{
	float soma = 2.0 * x * y / (x + y);
	return soma;
}