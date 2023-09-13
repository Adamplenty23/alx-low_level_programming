#include "main.h"

/**
 * _abs - this function computes the absolute value of an int
 *
 * @r: (int) the value to get the absolute value of
 *
 * Return: 0 indicates success
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		_putchar(r);
		return (r);
	}
	else
		return (r);
}
