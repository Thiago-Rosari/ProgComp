#include <iostream>
#include <climits>
using namespace std;

void isInt(long long num)
{
	if (num > INT32_MAX)
	{
		cout << num << " N�o cabe em 32 bits" << endl;
	}
	else {
		cout << num << " Cabe em 32 bits" << endl;
	}
}