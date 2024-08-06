#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at index
 * index of a listint_t linked list.
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *node_to_delete;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

for (i = 0; i < index - 1 && temp != NULL; i++)
temp = temp->next;

if (temp == NULL || temp->next == NULL)
return (-1);

node_to_delete = temp->next;
temp->next = node_to_delete->next;
free(node_to_delete);

return (1);
}

