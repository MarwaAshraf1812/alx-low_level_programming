#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: singly linked list
 *
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
        listint_t *current;

        if (head == NULL)
                return ;
        current = *head;
        while (current)
        {
                current = current->next;
                free(current);
		*head = current;

        }
        *head = NULL;
}
