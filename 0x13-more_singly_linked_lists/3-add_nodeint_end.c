#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t
 * list.
 * @head: previous element in the list
 * @n: number to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	
	while (last->next)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
