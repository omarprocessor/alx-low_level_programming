#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array using
 * the Jump Search algorithm
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1
 * if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
size_t step, prev, i;

/* Return -1 if the array is NULL or size is 0 */
if (array == NULL || size == 0)
return (-1);

/* Calculate the jump step size (square root of the array size) */
step = sqrt(size);
prev = 0;

/* Jump through the array in increments of the step size */
while (array[step < size ? step : size - 1] < value)
{
prev = step;
step += sqrt(size);

/* If the prev index is beyond the array size, return -1 */
if (prev >= size)
return (-1);
}

/* Print the range where the value might be */
printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

/* Check each value in the range from prev to step */
for (i = prev; i < step && i < size; i++)
{
/* Print each value being checked */
printf("Value checked array[%lu] = [%d]\n", i, array[i]);

/* If the value matches, return the index */
if (array[i] == value)
return (i);
}

/* Return -1 if the value is not found */
return (-1);
}
