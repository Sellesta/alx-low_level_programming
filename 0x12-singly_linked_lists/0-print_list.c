#include "lists.h"

/**
 * print_list - Function entry
 * Description: A function that prints all the elements of a list_t list
 * @h: address of a struct data type
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h) {
		if (h->str) {
			printf("[%zu] %s\n", h->len, h->str);
		} else {
			printf("[0] (nil)\n");
		}

		nodes++;
		h = h->next;
	}

	return nodes;
}
