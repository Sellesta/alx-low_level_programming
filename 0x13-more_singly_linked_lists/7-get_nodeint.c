#include "lists.h"

/**
 * get_nodeint_at_index - Function entry point
 * Description: returns the nth node of a listint_t linked list
 * @head: node head address
 * @index: is the index of the node, starting at 0
 * Return: returns the n th node of a listint_t linked list, if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int no_of_nodes = 0, count = 0;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		no_of_nodes++;
	}

	temp = head;

	if (index > no_of_nodes)
		return (NULL);

	while (count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}
