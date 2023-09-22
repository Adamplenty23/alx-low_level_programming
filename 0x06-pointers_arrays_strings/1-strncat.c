#include "main.h"

/**
 * _strncat - concatenate strings
 *
 * @dest: destination
 * @src: source
 * @n: number of byte(s)
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[count + i] = *src;
		src++;
	}
	dest[count + i] = '\0';
	return (dest);
}
