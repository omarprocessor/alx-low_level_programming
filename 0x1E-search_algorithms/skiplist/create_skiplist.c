#include "../search_algos.h"
#include <math.h>

/**
 * create_skiplist - Creates a sorted skip list from an array of integers
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: Pointer to the head of the skip list
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
skiplist_t *head = NULL, *node, *temp;
size_t i, express_index;

for (i = 0; i < size; i++)
{
node = malloc(sizeof(skiplist_t));
if (!node)
return (NULL);
node->n = array[i];
node->index = i;
node->next = NULL;
node->express = NULL;

if (!head)
head = node;
else
{
temp = head;
while (temp->next)
temp = temp->next;
temp->next = node;
}
}

express_index = sqrt(size);
temp = head;
for (i = 0; temp && i < size; i++)
{
if (i % express_index == 0 && i != 0)
temp->express = temp;
temp = temp->next;
}

return (head);
}
