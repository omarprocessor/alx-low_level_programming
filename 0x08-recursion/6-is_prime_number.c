
#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime recursively
 * @n: The number to check
 * @i: The divisor to check from
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
if (i >= n)
return (1);
else if (n % i == 0)
return (0);
else
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}

