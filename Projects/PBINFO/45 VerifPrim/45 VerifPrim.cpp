// #(nr) (nume problema)

#include "stdafx.h"
#include "iostream"
#include "cmath"

using namespace std;

int n, d;
int main()
{
	cin >> n;

	for (int i = 2; i <= sqrt(n); i++)
		if (n%i == 0)
			d++;

	if (d == 0 && n != 1 && n != 0)
		cout << "DA";
	else
		cout << "NU";

	system("PAUSE");
	return 0;
}