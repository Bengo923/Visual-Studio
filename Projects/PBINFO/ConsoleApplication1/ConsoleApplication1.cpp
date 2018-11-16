
#include "stdafx.h"
#include "iostream"
#include "fstream"

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

// x este intervalul de timp dupa care se intalnesc cei doi in secunde
// d reprezinta distanta fata de orasul din care a plecat Vasilica
float v1, v2, D, x, d;
int main()
{
	cin >> v1 >> v2 >> D;

	// transformam vitezele din km/h in m/s
	v1 = v1 / 3.6;
	v2 = v2 / 3.6;

	// transformam distanta in m
	D = D * 1000;

	x = D / (v1 + v2);

	d = (v1 * x) / 1000;

	cout << "Intervalul de timp este: " << x << " secunde" << endl;
	cout << "Distanta fata de orasul din care a plecat Vasilica este:" << d << " km/h";

	system("PAUSE");
	return 0;
}

