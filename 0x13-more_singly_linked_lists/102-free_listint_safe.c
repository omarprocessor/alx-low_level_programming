#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t count = 0;
listint_t *visited[1024];
size_t i = 0;
size_t j;

if (!h || !*h)
return (0);

current = *h;
while (current)
{
temp = *h;
while (temp != current)
{
if (temp == current)
{
*h = NULL;
return (count);
}
temp = temp->next;
}

visited[i++] = current;
count++;
current = current->next;

if (i >= 1024)
{
for (j = 0; j < i; j++)
free(visited[j]);
i = 0;
}
}

for (j = 0; j < i; j++)
free(visited[j]);

*h = NULL;
return (count);
}

