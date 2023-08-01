#include "lists.h"

/**
 * pop_listint - Function entry point
 * Description: A function that deletes the head node of a listint_t linked list
 * @head: pointer to the head address
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head = temp->next;
	data = temp->n;

	free(temp);

	return (data);
}
