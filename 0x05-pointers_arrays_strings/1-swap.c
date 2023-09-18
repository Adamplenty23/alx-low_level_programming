#include "main.h"

/**
 * swap_int - a function that swaps two integers
 *
 * @a: first integer to check
 * @b: second integer to check
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int adam = *a; /*a temporary variable to store *a*/
	*a = *b;
	*b = adam;
}
