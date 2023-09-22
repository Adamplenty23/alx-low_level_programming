#include "main.h"

/**
 * _strcat - a function that concatenate two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dstCnt = 0;
	int srccnt = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dstCnt++;
	for (i = 0; src[i] != '\0'; i++)
		srccnt++;
	for (i = 0; i <= srccnt; i++)
		dest[dstCnt + i] = src[i];
	return (dest);
}
