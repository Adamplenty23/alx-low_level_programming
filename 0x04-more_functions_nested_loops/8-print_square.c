#include "main.h"

/**
 * print_square - a function that prints square
 *
 * @size: the size of the square
 *
 * Return: no return value
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
			_putchar('#');
	_putchar('\n');
	}
}
