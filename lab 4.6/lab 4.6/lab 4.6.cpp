#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// перший спосіб
	int n;
	double P;
	double E;
	int k;
	E = 0;
	n = 1;
	while (n <= 25)

	{
		P = 1;
		k = 1;
		while (k <= n)

		{
			P *= sqrt ( cos (k + n) * cos(k + n));
			k++;

		}
		E += cos (n) + P;
		n++;

	}
	cout << E << endl;
	// 2 спосіб
	E = 0;
	n = 1;
	do
	{
		P = 1;
		k = 1;
		do
		{
			P *= sqrt(cos(k + n) * cos(k + n));
			k++;

		} while (k <= n);
		E += cos(n) + P;
		n++;

	} while (n <= 25);
	cout << E << endl;
	// 3 спосіб
	E = 0;
	for (n = 1; n <= 25; n++)

	{
		P = 1;
		for (k = 1; k <= n; k++)

		{
			P *= sqrt(cos(k + n) * cos(k + n));

		}
		E += cos(n) + P;

	}
	cout << E << endl;
	// 4 спосіб
	E = 0;
	for (n = 25; n >= 1; n--)

	{
		P = 1;
		for (k = n; k >= 1; k--)

		{
			P *= sqrt(cos(k + n) * cos(k + n));

		}
		E += cos(n) + P;

	}
	cout << E << endl;
	return 0;
}