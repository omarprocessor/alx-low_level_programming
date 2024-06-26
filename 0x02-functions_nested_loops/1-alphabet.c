#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description: Uses _putchar to print each lowercase letter of the English
 * alphabet in ascending order, followed by a new line.
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
