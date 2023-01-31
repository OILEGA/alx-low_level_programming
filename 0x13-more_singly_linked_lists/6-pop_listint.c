#include "lists.h"
/**
 * pop_listint - deletes the head node of a linkedlist
 * @head: pointer to the first element in a linked list
 *
 * Return: the data inside the element that was deleted
 * or return 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
