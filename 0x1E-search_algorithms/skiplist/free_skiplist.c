#include "../search_algos.h"

/**
 * free_skiplist - Frees the skip list
 * @list: Pointer to the head of the skip list
 */
void free_skiplist(skiplist_t *list)
{
skiplist_t *temp;

while (list)
{
temp = list;
list = list->next;
free(temp);
}
}
