#include "variadic_functions.h"

/**
 * print_numbers - a variadic function that prints list of numbers
 *
 * @separator: string between numbers
 * @n:the number of integers
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_disp;

	va_start(num_disp, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_disp, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(num_disp);
	printf("\n");
}
