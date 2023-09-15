#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - A function that checks for signs
 *
 * @i: the value to be checked
 *
 * Return: no return value
 */

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
