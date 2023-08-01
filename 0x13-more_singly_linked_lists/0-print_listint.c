#include "lists.h"

/**
 * print_list: Function entry
 * Description: A function which prints all list_t list elements
 * @h: address of a struct data type
 * Return: nodes count
 */

size_t print_list(const list_t *h)
{
	unsigned int j = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		j++;
	}

	return (j);
}
