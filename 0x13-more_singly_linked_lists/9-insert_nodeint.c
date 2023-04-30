#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new
* node at a given position
* @head: a pointer to the head of the linked list
* @idx: the index of the list where the new node should be added.
* Index starts at 0
* @n: the data to be added to the new node
* Return: returns the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->head = (*head);
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
