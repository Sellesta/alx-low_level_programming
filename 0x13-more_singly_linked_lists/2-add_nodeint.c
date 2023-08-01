#include "lists.h"

/**
 * add_nodeint - function entry
 * Description: Adds a new node at the beginning of a listint_t list
 * @head: the address to the head node
 * @n: value to be inserted
 * Return: Return: new element address, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
