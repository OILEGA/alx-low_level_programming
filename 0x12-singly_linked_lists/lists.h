#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: the length of the string
 * @next: it points to the next node
 *
 * Description: A singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
