#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: This represents a pointer to hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char set_flag = 0;    /* our set_flag is set to 0 when no data has been printed yet */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (set_flag == 1)  /*set_flag =1 as atleast one key-value pair has been printed */
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			set_flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");

