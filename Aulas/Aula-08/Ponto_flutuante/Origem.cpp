// tipos ponto flutuante
#include <iostream>
#include <cfloat>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "N�mero de D�gitos Significativos" << endl;
	cout << "float:         " << FLT_DIG << endl;
	cout << "double:        " << DBL_DIG << endl;
	cout << "long double:   " << LDBL_DIG << endl;

	cout << "Valores M�ximos do Expoente" << endl;
	cout << "float:         " << FLT_MAX_10_EXP << endl;
	cout << "double:        " << DBL_MAX_10_EXP << endl;
	cout << "long double:   " << LDBL_MAX_10_EXP << endl;

	cout << "N�mero de bits na Mantissa" << endl;
	cout << "float:         " << FLT_MANT_DIG << endl;
	cout << "double:        " << DBL_MANT_DIG << endl;
	cout << "long double:   " << LDBL_MANT_DIG << endl;
 
	return 0;
}