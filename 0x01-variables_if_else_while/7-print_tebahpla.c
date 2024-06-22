#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char omar;

for (omar = 'z'; omar >= 'a'; omar--)
{
putchar(omar);
}
putchar('\n');
return (0);
}

