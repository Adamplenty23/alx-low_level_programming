#include "main.h"

/**
 * print_numbers - display numbers from 0 to 9
 *
 * Return: no return value
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
		_putchar(a + '0');
	_putchar('\n');
}
