#include "lists.h"

/**
 * add_nodeint - a function that add a new node at the beginning of a list
 *
 * @head: the pointer to the first node
 * @n: int
 *
 * Return: the new nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
