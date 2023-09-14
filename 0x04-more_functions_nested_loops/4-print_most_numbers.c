#include "main.h"

/**
 * print_most_numbers - display numbers from 0 to 9 excluding 2 and 4
 *
 * Return: no return value
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
			a++;
		}
		_putchar(a + '0');
	}
	_putchar('\n');
}
