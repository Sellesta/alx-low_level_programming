#include "lists.h"

/**
 * free_listint - Function entry Point
 * Description: frees a listint_t list
 * @head: the node head address
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	next = current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
