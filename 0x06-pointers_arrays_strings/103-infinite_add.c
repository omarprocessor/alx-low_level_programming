#include "main.h"

/**
 * infinite_add - adds two integers stored as strings
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: array to store resulting string in
 * @size_r: size of array r
 * Return: the summed string in r. If r is too small for the result, return (0);
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0, index = 0, index2;

size_r--;
r[size_r] = 0;

while (*n1 && *n2)
{
index = add_digits(n1, n2, r, size_r, &carry);
if (index == -1)
return (0);
n1--;
n2--;
}

while (*n1)
{
index = add_remaining_digits(n1, r, size_r, &carry);
if (index == -1)
return (0);
n1--;
}

while (*n2)
{
index = add_remaining_digits(n2, r, size_r, &carry);
if (index == -1)
return (0);
n2--;
}

if (carry)
{
r[index++] = '1';
r[index] = 0;
}
else
{
r[index--] = 0;
}

reverse_str(r, index + 1);
return (r);
}

/**
 * add_digits - Adds two digits and manages carry
 * @n1: pointer to first digit character
 * @n2: pointer to second digit character
 * @r: result array
 * @size_r: size of the result array
 * @carry: pointer to carry integer
 * Return: the next index to fill, or -1 if overflow occurs
 */
int add_digits(char *n1, char *n2, char *r, int size_r, int *carry)
{
int index = 0;
r[index] = *n2 - '0' + *n1 + *carry;
*carry = 0;

if (r[index] > '9')
{
(*carry)++;
r[index] -= 10;
}

if (size_r == index && (n1 != 0 || n2 != 0 || *carry == 1))
return (-1);

return (index + 1);
}

/**
 * add_remaining_digits - Adds remaining digits and manages carry
 * @n: pointer to digit character
 * @r: result array
 * @size_r: size of the result array
 * @carry: pointer to carry integer
 * Return: the next index to fill, or -1 if overflow occurs
 */
int add_remaining_digits(char *n, char *r, int size_r, int *carry)
{
int index = 0;
r[index] = *n + *carry;
*carry = 0;

if (r[index] > '9')
{
*carry = 1;
r[index] -= 10;
}

if (size_r == index && (n != 0 || *carry == 1))
return (-1);

return (index + 1);
}

/**
 * reverse_str - Reverses a string in place
 * @str: the string to reverse
 * @len: the length of the string
 */
void reverse_str(char *str, int len)
{
int i, j;
char temp;

for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}

