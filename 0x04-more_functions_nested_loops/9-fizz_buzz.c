#include "main.h"

/**
 * main - fizzbuzz task
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (num == 100)
			printf("Buzz");
		else if (num % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d", num);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
