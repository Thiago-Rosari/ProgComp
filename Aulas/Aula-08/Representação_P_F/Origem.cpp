#include <iostream>
using namespace std;

int main()
{
	float f = 6.1;
	cout << "f = " << f << endl;

	// exibe n�meros com 8 casas depois da v�rgula
	//cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << fixed;
	cout.precision(8);

	cout << "f = " << f << endl;

	return 0;
}