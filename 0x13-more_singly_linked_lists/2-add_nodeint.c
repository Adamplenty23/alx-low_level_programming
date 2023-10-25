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
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
