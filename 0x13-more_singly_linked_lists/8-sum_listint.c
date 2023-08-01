#include "lists.h"

/**
 * sum_listint - Function entry
 * Description - A function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: address of the head node
 * Return: sum of all the data
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
