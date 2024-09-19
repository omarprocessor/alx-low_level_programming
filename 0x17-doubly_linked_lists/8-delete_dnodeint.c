#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete
 * Return: 1 on success, or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i;

if (temp == NULL)
return (-1);
if (index == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}
for (i = 0; temp != NULL && i < index; i++)
temp = temp->next;
if (temp == NULL)
return (-1);
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
free(temp);
return (1);
}
