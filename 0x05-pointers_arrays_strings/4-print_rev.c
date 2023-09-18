#include "main.h"

/**
 * _puts: A function that mimmicks puts and the content of the string
 * we are told to mimmick _puts function
 *
 * @str: string to print in normal order
 *
 * Return: nothing since it is a void return type
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++) /*a loop condition to print the string*/
		_putchar(*str);
	_putchar('\n');
}
