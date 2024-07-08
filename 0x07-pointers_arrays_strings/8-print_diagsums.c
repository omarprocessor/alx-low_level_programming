#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */


void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i, j;

for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
}

for (i = 0, j = size - 1; i < size; i++, j--)
{
sum2 += *(a + i * size + j);
}

printf("%d, %d\n", sum1, sum2);
}

