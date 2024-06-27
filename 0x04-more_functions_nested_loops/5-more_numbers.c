#include "main.h"
/**
 * more_numbers - prints 0-14
 */
void more_numbers(void)
{
int time = 0;
char num;

while (time < 10)
{
for (num = 0; num <= 14; num++)
{
if (num >= 10)
{
_putchar(num / 10 + '0');
}
_putchar(num % 10 + '0');
}
_putchar('\n');
time++;
}
}
