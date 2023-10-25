#include "lists.h"

/**
 * add_nodeint_end - a function that add a new node at the end of a list
 *
 * @head: the pointer to the first node
 * @n: int
 *
 * Return: the new nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;


	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if  (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}
