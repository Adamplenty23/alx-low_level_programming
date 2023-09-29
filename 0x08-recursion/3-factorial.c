#include "main.h"

/**
 * factorial - a function that calculate the value of an int
 *
 * @n: the integer to calculate the factorial
 *
 * Return: The factorial of the value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
