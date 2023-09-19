#include "main.h"

/**
 * print_rev - A function that mimmicks puts and the content of the string
 *
 * @s: string to print in normal order
 *
 * Return: nothing since it is a void return type
 */

void print_rev(char *s)
{
	int length, rev_conditn;

	length = 0;

	while (s[length] != '\0')
		length++;
	for (rev_conditn = length - 1; rev_conditn >= 0; rev_conditn--)
		_putchar(s[rev_conditn]);
	_putchar('\n');
}
