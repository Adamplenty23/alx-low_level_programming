#include "lists.h"

int _strlen(char *str);

/**
* add_node_end - a function that adds a new node to the end of linked list
* @head: double pointer to a linked list
* @str: string to add to the new node
* Return: pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}

/**
* _strlen - finds the length of a string
* @str: string to find the length of
*
* Return: length of string
*/
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
