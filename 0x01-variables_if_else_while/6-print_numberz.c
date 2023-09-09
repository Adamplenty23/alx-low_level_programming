#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0;

	while (num1 <= 9)
	{
	putchar('0' + num1);
	num1++;
	}
	putchar('\n');
	return (0);
}

