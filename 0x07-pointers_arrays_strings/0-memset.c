/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to be filled
 * 
 * Return: a pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    
    while (n > 0) {
        *ptr = b;
        ptr++;
        n--;
    }
    
    return (s);
}

