#include "main.h"

/**
 * _puts_recursion - a function that prints a string followed by a new line
 *
 * @s: the member that points to s
 *
 * Return: no return value
 */

void _puts_recursion(char *s)
{
	int count = 0;
	if (s[count] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[count]);
	_puts_recursion(s + 1);
}
