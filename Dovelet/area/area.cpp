#include "dovelet.h"

area::area(int width, int height)
	: width(width), height(height)
{
	
}

int area::solve()
{
	return width * height;
}