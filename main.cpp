#include <iostream>
#include "Recursion.h"
#include "Iteration.h"

int main()
{
	/* Recursion */
	int x = recursionFib(12);
	printf("%d\n", x);

	/* Iteration */
	int y = iterationFib(12);
	printf("%d", y);
}