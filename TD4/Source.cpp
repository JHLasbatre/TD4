#include <iostream>
#include "Header.h"
using namespace std;


void test()
{
	int n = 5;
	double * tab = new double[5];
	tab[0] = 4;
	tab[1] = 3;
	tab[2] = 8;
	tab[3] = 5;
	tab[4] = 2;
	RandomWalk r = RandomWalk(5, tab, NORMAL);
	cout << "average: " << r.average() << endl;
}



int main()
{
	test();
	return 0;
}