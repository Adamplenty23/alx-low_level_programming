#include "variadic_functions.h"

/**
 * sum_them_all - a variadic function that sum numbers
 *
 * @n: a const parameter for length of list
 *
 * Return: the return of the summation
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;

	va_list mysum;

	va_start(mysum, n);

	result = 0; /* initiate result*/
	if (!n)
		return (0);
	for (i = 0; i < n; i++)
	{
		result += va_arg(mysum, int);
	}
	return (result);
}

