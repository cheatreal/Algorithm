#include "m2s.h"

m2s::m2s(int min)
	:min(min)
{
	
}

int m2s::solve()
{
	return m2s::min * 60;
}

int m2s::GetMin()
{
	return m2s::min;
}