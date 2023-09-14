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

	for (a = 1; a <= n; a++)
	{
		for (b = 0; b <= a; b++)
			_putchar(' ');
		if (n <= 0)
			_putchar('\n');
		_putchar('\\');
		_putchar('\n');
	}

}
