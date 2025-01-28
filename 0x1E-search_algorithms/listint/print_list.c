#include "../search_algos.h"

/**
 * print_list - Prints the list of integers
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
while (list != NULL)
{
printf("Index[%lu] = [%d]\n", list->index, list->n);
list = list->next;
}
}
