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
	for (; *str != '\0'; str += 2) /*a loop condition to print the string*/
		_putchar(*str);
	_putchar('\n');
}
