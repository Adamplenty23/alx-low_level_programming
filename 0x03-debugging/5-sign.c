#include "main.h"

/**
 * print_sign - this function prints the sign of numbers
 *
 * @n: (int) the numbers that will be checked
 *
 * Return: 0 if number is equals to zero, 1 if the number is > 0 otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
