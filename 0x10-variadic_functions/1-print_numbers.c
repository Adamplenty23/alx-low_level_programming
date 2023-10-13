#include "variadic_functions.h"

/**
 * print_numbers
 *
 * @seperator: string between numbers
 * @n:the number of integers
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_disp;

	va_start(num_disp, n);
	separator = ", ";

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_disp, int));
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
}
