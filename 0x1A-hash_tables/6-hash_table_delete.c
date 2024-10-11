#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 *
 * This function frees all the nodes and the table itself.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current_node, *temp_node;
unsigned long int index;

if (!ht)
return;

for (index = 0; index < ht->size; index++)
{
current_node = ht->array[index];

while (current_node)
{
temp_node = current_node;
current_node = current_node->next;
free(temp_node->key);
free(temp_node->value);
free(temp_node);
}
}

free(ht->array);
free(ht);
}
