//#include "stdafx.h"
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int w, c, x, y;
	cin >> c;
	if (c < 1)
		return -1;
	int **m = new int*[c];
	for (x = 0; x < c; x++)
		m[x] = new int[c];
	for (y = 0; y < c; y++)
		for (x = 0; x < c; x++)
			m[y][x] = 0;
	for (x = 0; x < c; x++)
		m[x][0] = 1;
	for (y = 1; y < c; y++)
		for (x = 1; x < c; x++)
			m[y][x] = m[y - 1][x - 1] + m[y - 1][x];
	w = log10(m[c - 1][c / 2]) + 2;
	for (y = 0; y < c; y++)
	{
		for (x = 0; x < c; x++)
			if (m[y][x] != 0)
				cout << setw(w) << m[y][x];
		cout << endl;
	}
	for (x = 0; x < c; x++)
		delete[] m[x];
	delete[] m;
	cin.get();
	cin.get();
	return 0;
}
