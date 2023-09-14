#include "main.h"

/**
 * _isupper - check for lowercase letters
 *
 * @c: (char) The character to be checked.
 *
 * Return: 1 if the statement is true while 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
