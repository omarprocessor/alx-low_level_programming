#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list
 * @value: The value to search for
 *
 * Return: Pointer to the node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *temp = list;

if (!list)
return (NULL);

/* Move through express lanes */
while (temp->express)
{
printf("Value checked at index [%lu] = [%d]\n", temp->express->index, temp->express->n);
if (temp->express->n >= value)
break;
temp = temp->express;
}

/* If we've reached the end of the express lane, check the last segment */
printf("Value found between indexes [%lu] and [%lu]\n", temp->index, temp->express ? temp->express->index : temp->index);

/* Now search the normal linked list segment */
while (temp)
{
printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
if (temp->n == value)
return (temp);
temp = temp->next;
}

return (NULL);
}
