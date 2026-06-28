// Utilizando argumentos na linha de comando
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	cout << "Programa: " << argv[0] << endl;    // argv[0] é o nome do programa.

	if (argc > 1) {                            // argc é a quantidade de palavras digitada na linha de comando
		cout << "arg: " << argv[1] << endl;    // argv[1] é o que vem depois do nome do programa
		cout << "arg: " << argv[2] << endl;
		cout << "arg: " << argv[3] << endl;
	}

	return 0;
}