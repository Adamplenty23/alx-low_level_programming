#include "main.h"

/**
 * more_numbers - display numbers from 0 to 14 in 10 times
 *
 * Return: no return value
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			if (b <= 13 || b == 14)
				_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
