#include <stdlib.h>
#include "lists.h"
/**
 * list_len - the number of elements list
 * @h: the pointer to structure
 *
 * Return: length
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
