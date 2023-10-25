#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 *
 * @h: the head of the list
 *
 * Return: the elements of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
