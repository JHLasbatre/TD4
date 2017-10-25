#include <iostream>
#include "Header.h"
using namespace std;

void RandomWalk::printTab()
{
	cout << "[" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << ", " << endl;
	}
	cout << tab[n] << "]" << endl;
}

RandomWalk::RandomWalk(int n, double * tab, Distribution d)
{
	this->n = n;
	this->tab = new double[n];
	this->d = d;
}

double RandomWalk::average()
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += tab[i];
	}
	return sum / (double)(n + 1);
}