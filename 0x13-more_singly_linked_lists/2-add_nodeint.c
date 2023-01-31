#include "lists.h"
/**
 * *add_nodeint - used to add a new node to the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: the data or value to insert in the new node
 *
 * Return: pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new; /**  declaration of data of new node  */

	new = malloc(sizeof(listint_t)); /** allocation of memory for d new node */
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
