#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: the address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *pointer;
	size_t nchar;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;

		new->len = nchar;
		new->next = NULL;
		pointer = *head;

		if (pointer == NULL)
		{
			*head = new;
		}
		else
		{
			while (pointer->next != NULL)
				pointer = pointer->next;
			pointer->next = new;
		}
		return (*head);
}
