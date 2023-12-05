#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	// exibe n�meros sempre com 6 casas depois da v�rgula
	cout.setf(ios_base::fixed, ios_base::floatfield);

	float fltvar = 10.0 / 3.0;    // bom para at� 6 d�gitos
	double dblvar = 10.0 / 3.0;   // bom para at� 15 d�gitos
	float milhao = 1.0e6;

	cout << "float var = " << fltvar;
	cout << ", vezes um milh�o = " << milhao * fltvar << endl;
	cout << "double var = " << dblvar;
	cout << ", vezes um milh�o = " << milhao * dblvar << endl;

	return 0;
}