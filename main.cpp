#include "area.h"
#include <iostream>

using namespace std;

void main()
{
	area * areas;
	int width, height;
	cin >> width >> height;
	areas = new area(width, height);
	cout << areas->solve();
}