/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr_dest = dest;
char *ptr_src = src;

while (n > 0)
{
*ptr_dest = *ptr_src;
ptr_dest++;
ptr_src++;
n--;
}

return (dest);
}
