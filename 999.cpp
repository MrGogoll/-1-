#include <iostream>
using namespace std;
int main()
{
	int z,a;
	cin >> a;
	z = a / 5;
	if (a % 5==0) {
	cout <<	z ;
	}
	else
	{
		cout << z + 1;
	}
}