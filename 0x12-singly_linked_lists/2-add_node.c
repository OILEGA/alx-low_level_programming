#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node - adds new node to beginning of list_t
* @head: the pointer to structure
* @str: string
*
* Return: the address of a new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
unsigned int lenght = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	newNode->len = lenght;
	if (*head != NULL)
		newNode->next = *head;
	if (*head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head);
}
