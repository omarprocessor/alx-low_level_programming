
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
   consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 1;
char *a;

while (*s && found)
{
found = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
count++;
found = 1;
break;
}
}
if (found)
s++;
}

return (count);
}

