#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees a list
 * @head: a list that enters into the function
 */
void free_list(list_t *head)
{
	list_t *pointer;

	pointer = head;

	while (pointer != NULL)
	{
		free(pointer->str);
		free(pointer);
		pointer = pointer->next;
	}
}
