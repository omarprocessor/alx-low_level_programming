#include <stddef.h>

/**
 * int_index - searches for an integer in an array using a
 * comparison function
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0, or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}

