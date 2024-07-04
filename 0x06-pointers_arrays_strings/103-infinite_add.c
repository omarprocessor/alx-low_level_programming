#include "main.h"
/**
* add_digit - Add two digits and a carry, updating the carry if necessary.
* @d1: first digit
* @d2: second digit
* @c: carry
* Return: result digit (0-9)
*/
char add_digit(char d1, char d2, int *c)
{
int result = d1 - '0' + d2 + *c;
*c = 0;
if (result > '9')
{
*c = 1;
result -= 10;
}
return (result + '0');
}

/**
* reverse_string - Reverse a string in place.
* @str: string to reverse
*/
void reverse_string(char *str)
{
int length = _strlen(str);
int i;
for (i = 0; i < length / 2; i++)
{
char temp = str[i];
str[i] = str[length - i - 1];
str[length - i - 1] = temp;
}
}

/**
* infinite_add - adds two strings of digits
* @a: first string
* @b: second string
* @res: buffer to store result
* @size: size of buffer
* Return: summed string or 0 if buffer too small
*/
char *infinite_add(char *a, char *b, char *res, int size)
{
int carry = 0;
char *p1 = a + _strlen(a) - 1;
char *p2 = b + _strlen(b) - 1;
int index = 0;

res[size - 1] = '\0';

while (p1 >= a || p2 >= b || carry)
{
char d1 = (p1 >= a) ? *p1 : '0';
char d2 = (p2 >= b) ? *p2 : '0';

res[index++] = add_digit(d1, d2, &carry);
if (p1 >= a)
p1--;
if (p2 >= b)
p2--;
if (index >= size)
return (NULL);
}
reverse_string(res);
return (res);
}

