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
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	printf("%d\n", temp->n);
	count++;
	return (count);
}

