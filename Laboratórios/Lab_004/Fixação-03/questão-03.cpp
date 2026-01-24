// Exercício de fixação 03
#include <iostream>
#include <windows.h>
using namespace std;

//-----------------------------------------
void UmTres(void);
void Dois(void);
//-----------------------------------------
int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Começando agora: " << endl;
	UmTres();
	cout << "Pronto!" << endl;

	return 0;
}

//-----------------------------------------
void UmTres(void)
{
	cout << "Um ";
	Dois();
	cout << "Três";
	cout << endl;
}

void Dois(void)
{
	cout << "Dois ";
}