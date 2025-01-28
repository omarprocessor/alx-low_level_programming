#include "../search_algos.h"

/**
 * create_list - Creates a singly linked list from an array of integers
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: Pointer to the head of the list
 */
listint_t *create_list(int *array, size_t size)
{
size_t i;
listint_t *head = NULL, *new_node, *temp;

for (i = 0; i < size; i++)
{
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = array[i];
new_node->index = i;
new_node->next = NULL;
if (head == NULL)
head = new_node;
else
{
temp = head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
}
}
return (head);
}
