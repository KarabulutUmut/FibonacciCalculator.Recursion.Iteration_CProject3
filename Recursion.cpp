#include "Recursion.h"

int recursionFib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return recursionFib(n - 1) + recursionFib(n - 2);
	}
}
