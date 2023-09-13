#include "main.h"

/**
 * print_alphabet_x10 - print all alphabets in 10 lines.
 *
 * no return value
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
			_putchar('\n');
	}
}
