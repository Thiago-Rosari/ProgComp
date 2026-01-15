#include <iostream>
using namespace std;

void feliz();
void natal();
void anoNovo();

int main()
{
	cout << "Eu desejo a todos um ";
	feliz();
	natal();

	cout << "e um ";

	feliz();
	anoNovo();

	cout << endl;

	return 0;
}

//=====================================================
void feliz()
{
	cout << "Feliz ";
}

void natal()
{
	cout << "Natal ";
}

void anoNovo()
{
	cout << "Ano novo ";
}