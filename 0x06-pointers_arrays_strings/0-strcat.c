#include <stdio.h>

/**
 * *_strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * This function appends the src string to the dest string, overwriting
 * the terminating null byte ('\0') at the end of dest, and then adds
 * a terminating null byte. Returns a pointer to the resulting string dest.
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}

while (*src != '\0')
{
*ptr++ = *src++;
}

*ptr = '\0';

return (dest);
}
