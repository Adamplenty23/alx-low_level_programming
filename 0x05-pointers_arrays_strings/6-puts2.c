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
	int len = 0;

	while (str[len] != '\0')
	{
		 _putchar(str[len]);
		 len += 2;
	}
	_putchar('\n');
}
