#include <iostream>

using namespace std;


enum Distribution { NORMAL, EXPONNENTIAL, UNIFORM };

class RandomWalk
{
private:
	int n;
	double * tab;
	Distribution d;
public:
	RandomWalk(int n, double * tab, Distribution d);
	int getN() { return n; }
	Distribution getDist() { return d; }
	double * getTab() { return tab; }
	void printTab();
	double average();

};
