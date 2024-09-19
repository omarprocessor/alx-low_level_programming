#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 * Return: Pointer to the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
