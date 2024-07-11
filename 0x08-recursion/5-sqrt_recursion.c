#include "main.h"

/**
 * _sqrt_recursion_helper - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @i: The current value to check as a possible square root
 * Return: Natural square root of n, or -1 if no natural square root found
 */
int _sqrt_recursion_helper(int n, int i)
{
if (i * i > n)
return (-1);
else if (i * i == n)
return (i);
else
return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: Natural square root of n, or -1 if no natural square root found
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (_sqrt_recursion_helper(n, 1));
}

