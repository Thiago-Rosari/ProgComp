// Depurando fun��es
#include <iostream>
using namespace std;

//---------------------------------------------------
// prot�tipos

void feliz(void);
void natal(void);
void anonovo(void);

//---------------------------------------------------
// funn��o principal

int main()
{
	cout << "Eu desejo a todos um ";
	feliz();
	natal();
	cout << "e um ";
	feliz();
	anonovo();
	cout << endl;

	return 0;
}

//--------------------------------------------------
// defini��o das fun��es auxiliares

void feliz(void) {
	cout << "Feliz ";
}

void natal(void) {
	cout << "Natal ";
}

void anonovo(void) {
	cout << "Ano novo";
}