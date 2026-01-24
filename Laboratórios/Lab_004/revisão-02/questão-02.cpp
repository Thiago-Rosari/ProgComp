#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int num = rand();

	cout << "Gerando numero " << num << endl;
	if (num > 16834) {
		cout << "GRANDE\n";
	}
	else {
		cout << "PEQUENO\n";
	}
	return 0;
}