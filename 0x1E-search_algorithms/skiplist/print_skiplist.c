#include "../search_algos.h"

/**
 * print_skiplist - Prints the skip list and express lanes
 * @list: Pointer to the head of the skip list
 */
void print_skiplist(const skiplist_t *list)
{
const skiplist_t *temp = list;

printf("List :\n");
while (temp)
{
printf("Index[%lu] = [%d]\n", temp->index, temp->n);
temp = temp->next;
}

printf("\nExpress lane :\n");
temp = list;
while (temp)
{
if (temp->express)
printf("Index[%lu] = [%d]\n", temp->express->index, temp->express->n);
temp = temp->next;
}
}
