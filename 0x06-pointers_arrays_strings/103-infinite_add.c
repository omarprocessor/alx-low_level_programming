#include <stdio.h>
#include <string.h>
/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer 'r'.
 *
 * Return: Pointer to 'r', or 0 if result cannot fit in 'r'.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int i = len1 - 1;
int j = len2 - 1;
int k = 0;

int start, end;
start = 0;
end = k - 1;

if (len1 >= size_r || len2 >= size_r)
return (0);

while (i >= 0 || j >= 0 || carry > 0)
{
int digit1 = (i >= 0) ? n1[i--] - '0' : 0;
int digit2 = (j >= 0) ? n2[j--] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;

if (k >= size_r - 1)
return (0);

r[k++] = (sum % 10) + '0';
}

r[k] = '\0';

for (; start < end; start++, end--)
{
char temp = r[start];
r[start] = r[end];
r[end] = temp;
}

return (r);
}

