#include "main.h"

/**
 * print_array - a function that prints the element of array
 *
 * @a: the pointer
 * @n: the number of element
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	n = 0;
	for (; a[n] != '\0'; n++)
	{
		printf("%d, \n", a[n]);
	}
}
