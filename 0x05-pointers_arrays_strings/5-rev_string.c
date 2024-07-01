#include "main.h"

/**
*swap_chars - Swaps two characters in a string.
*@a: Pointer to the first character.
*@b: Pointer to the second character.
*Return: void.
*/
void swap_chars(char *a, char *b)
{
char temp = *a;
*a = *b;
*b = temp;
}

/**
*_str_len - Computes the length of a string.
*@s: The string to compute the length of.
*Return: The length of the string.
*/
int _str_len(char *s)
{
int count = 0, length = 0;
while (s[count] != '\0')
{
length++;
count++;
}
return (length);
}

/**
*rev_string - Reverses a string in place.
*@s: The string to reverse.
*Return: void.
*/
void rev_string(char *s)
{
int start = 0, end;
end = _str_len(s) - 1;

while (end > start)
{
swap_chars(s + end, s + start);
start++;
end--;
}
}

