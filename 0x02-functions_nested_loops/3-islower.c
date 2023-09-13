#include "main.h"

/**
 * _islower - check for lowercase letters
 *
 * @c: (char) The character to be checked.
 *
 * Return: 1 if the statement is true while 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
