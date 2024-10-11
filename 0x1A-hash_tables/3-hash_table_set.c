#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
hash_node_t *current_node;
unsigned long int index;

if (!ht || !key || strlen(key) == 0)
return (0);

index = key_index((unsigned char *)key, ht->size);

current_node = ht->array[index];
while (current_node)
{
if (strcmp(current_node->key, key) == 0)
{
free(current_node->value);
current_node->value = strdup(value);
return (1);
}
current_node = current_node->next;
}

new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
