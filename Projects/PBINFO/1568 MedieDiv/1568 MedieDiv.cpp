// #(nr) (nume problema)

#include "stdafx.h"
#include "iostream"
#include "cmath"

using namespace std;

int main()
{
	int n=0, nrD = 1, s = 0;
	float ma=0;

	cin >> n;
	s += n;

	for (int i = 1; i <= n/2; i++)
		if (n%i == 0) {
			nrD++;
			s += i;
		}

	ma = (float)s / nrD;
	ma *= 100;
	ma = floor(ma);
	ma = ma / 100;

	cout << ma;

	system("PAUSE");
	return 0;
}