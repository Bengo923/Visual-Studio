// #(nr) (nume problema)

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	int a, b, r;

	cin >> a >> b;

	if (a == 0 && b == 0) {
		cout << -1;
	}
	else {
		while (b) {
			r = a % b;
			a = b;
			b = r;
		}
		cout << a;
	}

	system("PAUSE");
	return 0;
}