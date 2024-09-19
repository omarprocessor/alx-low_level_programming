#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Double pointer to the head of the list
 * @idx: Index to insert the new node
 * @n: Data to insert in the new node
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *temp = *h;
unsigned int i;

if (idx == 0)
return (add_dnodeint(h, n));
for (i = 0; temp != NULL && i < idx - 1; i++)
temp = temp->next;
if (temp == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}
