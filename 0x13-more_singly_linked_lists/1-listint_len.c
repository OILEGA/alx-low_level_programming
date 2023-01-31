#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list to transverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numNode = 0;

	while (h != NULL)
	{
		numNode++;
		h = h->next;
	}
	return (numNode);
}
