#include "lists.h"

/**
 * add_node - Function entry
 * Description: A function that adds a new node at the beginning of a list_t list
 * @head: address of a pointer to the first node
 * @str: the string to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return NULL;
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return new;
}
