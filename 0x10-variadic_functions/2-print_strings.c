#include "variadic_functions.h"

/**
 * print_strings - a variadic function that prints list of strings
 *
 * @separator: string between strings
 * @n:the number of strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str_disp;
	const char *str;

	va_start(str_disp, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_disp, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(str_disp);
	printf("\n");
}
