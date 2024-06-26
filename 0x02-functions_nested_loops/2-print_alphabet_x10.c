#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * Description: Uses _putchar to print each lowercase letter
 *of the English
 *alphabet in 10 times.
 */
void print_alphabet_x10(void)
{
int time, letter;
for (time = 0; time <= 9; time++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
