#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head, *temp;
size_t count = 0;

while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

temp = head;
while (temp != current)
{
if (temp == current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
return (count);
}
temp = temp->next;
}

current = current->next;
}

return (count);
}

