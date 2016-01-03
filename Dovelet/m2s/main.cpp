#include "m2s.h"
#include <iostream>

using namespace std;

void main()
{
	int min;
	m2s * pm2s;
	cin >> min;
	pm2s = new m2s(min);
	cout << pm2s->GetMin() << " minutes is " << pm2s->solve() << " seconds." << endl;
}