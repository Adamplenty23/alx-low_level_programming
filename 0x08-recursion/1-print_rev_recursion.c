#include "main.h"

/**
 * _print_rev_recursion - this function prints alphabet in reverse
 *
 * @s: the pointer to access the string
 *
 * Return: no value as it is a void function
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}


