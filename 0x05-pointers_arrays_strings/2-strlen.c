#include "main.h"

/**
 * _strlen - a function that calculate the lenght of string
 *
 * @*s: pointer s
 *
 * Return: the lenght of string
 */

int _strlen(char *s)
{
	int length = 0; /*variable to store the lenght*/

	for (; *s != '\0'; s++)
		length++;
	return (length);
}
