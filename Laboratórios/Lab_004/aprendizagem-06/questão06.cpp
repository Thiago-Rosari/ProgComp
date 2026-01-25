// Exercício de aprendizagem 06
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void Inicializar(void);
void Ligar(void);
void Verificar(void);
void Ativar(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	Inicializar();


	return 0;
}

//----------------------------------------------------

void Inicializar(void)
{
	srand(time(NULL));
	int num = rand();

	cout << "Inicializando o Sistema..." << endl;

	Ligar();
	Verificar();
	Ativar();

	cout << "Inicialização concluída." << endl << endl;

	if (num > 16384) {
		cout << "Sistema em funcionamento.\n";
	}
	else {
		cout << "Falha na inicialização.\n";
	}
}

void Ligar(void)
{
	cout << "- Ligando dispositivos..." << endl;
}

void Verificar(void)
{
	cout << "- Verificando integridade..." << endl;

}

void Ativar(void)
{
	cout << "- Ativando processos..." << endl;
}