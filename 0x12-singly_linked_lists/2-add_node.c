#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: first element in the list
 * @str: data to be added
 *
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(len);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
