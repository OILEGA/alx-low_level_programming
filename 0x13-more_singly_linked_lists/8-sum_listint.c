#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head:
 * first node in the linked list
 *
 * Return: the sum of all the numbers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
