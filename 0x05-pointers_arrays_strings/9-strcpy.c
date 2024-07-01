#include "main.h"

/**
* _strcpy - Copy a string from source to destination
* @dest: Destination buffer to copy to
* @src: Source string to copy from
* Return: Pointer to the destination string (dest)
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}

*(dest + i) = '\0';

return (dest);
}

