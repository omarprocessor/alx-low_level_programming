#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char omar;

for (omar = 'a'; omar <= 'z'; omar++)
{
if (omar != 'q' && omar != 'e')
{
putchar(omar);
}
}
putchar('\n');

return (0);
}

