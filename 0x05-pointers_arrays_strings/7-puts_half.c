#include "main.h"

/**
*puts_half - Prints the second half of a string, followed by a new line.
*@str: The string to process.
*
*Description: If the length of the string is odd, prints the last n
*characters where n = (length_of_the_string + 1) / 2.
*Return: void.
*/
void puts_half(char *str)
{
int length = _strlen(str);
int start_index;

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length + 1) / 2;
}

while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}
_putchar('\n');
}

/**
*_strlen - Computes the length of a string.
*@s: The string to compute the length of.
*Return: The length of the string.
*/
int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
return (count);
}

