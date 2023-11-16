#include "Iteration.h"

int iterationFib(int n)
{
	int previousFib = 0;
	int currentFib = 1;
	
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
		for (int i = 0; i <= n - 2; i++)
		{
			int newFib = previousFib + currentFib;
			previousFib = currentFib;
			currentFib = newFib;
		}
		return currentFib;
	}
}