#include "main.h"

/**
 * _strcmp - a function that compares 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 or 1 base on the boolean outcome
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s2[i] < s1[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
