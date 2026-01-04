#include <iostream>
using namespace std;

int main()
{
	int lado_a;
	int lado_b;
	int base;
	int altura;
	int volume;

	cout << "Lado a: ";
	cin >> lado_a;
	cout << "Lado b: ";
	cin >> lado_b;

	base = lado_a * lado_b;
	cout << "Area da base = " << base << endl;

	cout << "Altura: ";
	cin >> altura;

	volume = base * altura;
	cout << "Volume do prisma = " << volume << endl;

	return 0;
}