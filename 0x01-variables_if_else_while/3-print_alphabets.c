#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char upper_alpha = 'A';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	while (upper_alpha <= 'Z')
	{
		putchar(upper_alpha);
		upper_alpha++;
	}
	putchar('\n');
	return (0);
}

