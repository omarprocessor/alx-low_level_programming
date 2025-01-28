#include "search_algos.h"
#include <stdio.h>

/**
 * print_subarray - Prints a subarray of integers between indices low and high.
 * @array: The array to be printed.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray.
 */
void print_subarray(int *array, size_t low, size_t high)
{
size_t i;

printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");
}

/**
 * binary_search - Performs a binary search to find the index of the first
 * occurrence of a value in a sorted array.
 * @array: The sorted array of integers.
 * @size: The total number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index of the first occurrence of value if found, or -1 if not.
 */
int binary_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t mid;

/* Base case: if the subarray is empty */
if (low > high)
return (-1);

mid = (low + high) / 2;

/* Print the current subarray being searched */
print_subarray(array, low, high);

if (array[mid] == value)
{
/* Check if it's the first occurrence */
if (mid == low || array[mid - 1] != value)
return (mid);

/* Otherwise, search in the left subarray */
high = mid - 1;  /* Update high to search in the left subarray */
}
else if (array[mid] < value)
{
low = mid + 1;  /* Update low to search in the right subarray */
}
else
{
high = mid - 1;  /* Update high to search in the left subarray */
}

return (binary_search(array, high - low + 1, value));  /* Adjust the size accordingly */
}

/**
 * advanced_binary - A wrapper for binary_search that is used to find
 * the index of the first occurrence of a value in a sorted array.
 * @array: The sorted array of integers.
 * @size: The total number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index of the first occurrence of value if found, or -1 if not.
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (binary_search(array, size, value));
}
