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
putchar(omar);
}
for (omar = 'A'; omar <= 'Z'; omar++)
{
putchar(omar);
}
putchar('\n');

return (0);
}

