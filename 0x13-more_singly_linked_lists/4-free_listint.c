#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the singly linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current)
	{
		head = head->next;
		free(head);
		head = current;
	}
}
