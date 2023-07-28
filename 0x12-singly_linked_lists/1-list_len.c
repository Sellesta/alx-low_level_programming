#include "lists.h"

/**
 * list_len - Function entry
 * Description: A function that returns the number of elements in a linked list_t list
 * @h: address of a struct data type
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h) {
		count++;
		h = h->next;
	}

	return count;
}
