#include "main.h"

/**
 * print_diagonal - display n number of diagonals
 *
 * @n: the numbers to check
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 1; a <= n; a++)
	{
		for (b = 2; b <= a; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

}
