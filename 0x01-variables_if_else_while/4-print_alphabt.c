#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e')
		{
			alpha++;
			continue;
		}
		else if (alpha == 'q')
		{
			alpha++;
			continue;
		}
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}

