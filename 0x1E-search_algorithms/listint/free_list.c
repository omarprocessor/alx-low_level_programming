#include "../search_algos.h"

/**
 * free_list - Frees the memory allocated for the list
 * @list: Pointer to the head of the list
 */
void free_list(listint_t *list)
{
listint_t *temp;

while (list != NULL)
{
temp = list;
list = list->next;
free(temp);
}
}
