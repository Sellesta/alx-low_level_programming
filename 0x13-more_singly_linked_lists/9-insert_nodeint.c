#include "lists.h"

/**
 * insert_nodeint_at_index - Function entry point
 * Description: Inserts a new node at a given position in the linked list.
 * @head: A pointer to the head of the linked list.
 * @idx: The index where the new node should be added (0-based index).
 * @n: The value to be added in the new node.
 * Return: The address of the new node or NULL if it failed.
 * If it is not possible to add the new node at index idx, do not add the new node and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
