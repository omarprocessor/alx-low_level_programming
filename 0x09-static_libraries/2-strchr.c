#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
char *ptr = s;

while (*ptr != '\0')
{
if (*ptr == c)
return (ptr);
ptr++;
}

if (c == '\0')
return (ptr);

return (NULL);
}
