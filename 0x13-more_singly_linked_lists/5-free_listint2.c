#include "lists.h"

/**
 * free_listint2 - Function entry
 * Description: frees a listint_t list
 * @head: the node head address, then sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (*head == NULL)
		return;

	current = next = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
