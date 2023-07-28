#include "lists.h"

/**
 * add_node_end - Function entry
 * Description: A function that adds a new node at the end of a list_t list
 * @head: address of a pointer to the first node
 * @str: the string to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return NULL;
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return new;
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	return new;
}
