#include "list.h"

/**
 * insert_nodeint_at_index - Function entry
 * Description: A function that inserts a new node at a given position
 * @head: a pointer to the head address
 * @idx: the index of the list where the new node should be added
 * @n: the value to be added in the new node
 * Return: the address of the new node or NULL if it failed
 * if it is not possible to add the new node at index idx
 * ...do not add the new node and return NULL
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
