#include "main.h"
/**
 * print_rev - prints in reverse
 * @s:string
 */

void print_rev(char *s)
{
int length = 0, strindex = 0;
length = _strlen(s);

for (strindex = length - 1; strindex >= 0; strindex--)
_putchar(s[strindex]);

_putchar('\n');
}


/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

