#include "main.h"

/**
 * puts2 - the content of the string
 * we are told to mimmick _puts function
 *
 * @str: string to print in normal order
 *
 * Return: nothing since it is a void return type
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		 putchar(str[length]);
		 length += 2;
	}
	_putchar('\n');
}
