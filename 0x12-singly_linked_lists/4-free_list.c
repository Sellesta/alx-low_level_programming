#include "lists.h"

/**
 * free_list - Function entry
 * Description: A function that frees a list_t list
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
