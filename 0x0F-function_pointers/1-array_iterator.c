#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter o
 * n each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: pointer to the function to use for each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

