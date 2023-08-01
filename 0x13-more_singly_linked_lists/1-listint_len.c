#include "lists.h"

/**
 * listint_len - Function entry point
 * Description: Returns elements counts
 * in a linked listint_t list
 * @h: the address of the head node
 * Return: Elements count
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
