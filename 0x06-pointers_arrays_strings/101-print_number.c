#include "main.h"

/**
* print_number - Prints an integer using _putchar.
* @n: The integer to print.
*/
void print_number(int n)
{
int divisor = 1;
int num = n;
int digit;

if (num < 0)
{
_putchar('-');
num = -num;
}

while (num / divisor >= 10)
{
divisor *= 10;
}

while (divisor != 0)
{
digit = num / divisor;
_putchar(digit + '0');
num %= divisor;
divisor /= 10;
}
}

