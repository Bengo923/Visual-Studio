// #2362 balmascat

#include "stdafx.h"
#include "iostream"
#include "fstream"

using namespace std;

ifstream fin("balmascat.in");
ofstream fout("balmascat.out");

int numar, p, c, cg, produs = 1, nrcg, nrCifre, douaCifreCod, cifraCodUnu, cifraCodDoi, cod;
int main()
{
	fin >> numar >> p;

	cg = p;

	while (cg <= numar)
	{
		cg = p * produs;
		produs++;
	}

	if (cg > numar)
	{
		cg -= p;
	}

	nrcg = cg / p;

	c = nrcg % 10;

	nrCifre = 2 * p;

	if (c != 9)
	{
		douaCifreCod = (c + 1) * 10 + c;
	}
	else
	{
		douaCifreCod = (c - 1) * 10 + c;
	}

	int temp = 0;
	while (temp <= nrCifre / 2)
	{
		temp++;
		cod = douaCifreCod;
		if (cod != 0)
		{
			cod = cod * 100 + douaCifreCod;
		}
	}

	cifraCodUnu = douaCifreCod / 10;

	//fout << "cutie goala:" << cg << endl << "numar cutii goale:" << nrcg << endl << "cod:" << cod << cifraCodUnu;
	fout << cod << cifraCodUnu;
	//system("PAUSE");
	return 0;
}

