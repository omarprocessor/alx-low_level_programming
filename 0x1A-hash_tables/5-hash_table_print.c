#include "hash_tables.h"

/**
 * hash_table_print - Prints the key/value pairs of a hash table.
 * @ht: The hash table to print.
 *
 * Format: {'key': 'value', ...}
 * If ht is NULL, do nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *current_node;
unsigned long int index;
int first = 1;

if (!ht)
return;

printf("{");

for (index = 0; index < ht->size; index++)
{
current_node = ht->array[index];

while (current_node)
{
if (!first)
printf(", ");
printf("'%s': '%s'", current_node->key, current_node->value);
first = 0;
current_node = current_node->next;
}
}

printf("}\n");
}

