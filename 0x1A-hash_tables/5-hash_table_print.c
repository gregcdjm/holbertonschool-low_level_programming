#include "hash_tables.h"
/**
 * hash_table_print - prints hash tab
 * @ht: hash tab to add the key/value
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int x = 0;
	char *str = "", *coma = ", ";

	if (ht)
	{
		printf("{");
		for (; x < ht->size; x++)
		{
			tmp = ht->array[x];
			while (tmp)
			{
				printf("%s", str);
				printf("'%s': '%s'", tmp->key, tmp->value);
				str = coma;
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
