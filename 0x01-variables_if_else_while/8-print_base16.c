#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hexdigit;

	for (hexdigit = '0'; hexdigit <= 'f'; hexdigit++)
	{
		if (hexdigit >= '0' && hexdigit <= '9')
			putchar(hexdigit);
	else if (hexdigit >= 'a' && hexdigit <= 'f')
		putchar(hexdigit);
	}
	putchar('\n');
	return (0);
}

