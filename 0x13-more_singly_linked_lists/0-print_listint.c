#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numNode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numNode++;
		h = h->next;
	}
	return (numNode);
}
