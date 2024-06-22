#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1; num2 <= 99; num2++)
{
int num1_tens = num1 / 10;
int num1_units = num1 % 10;
int num2_tens = num2 / 10;
int num2_units = num2 % 10;


if (!(num1 == 0 && num2 == 0) && num1 <= num2)
{
putchar(num1_tens + '0');
putchar(num1_units + '0');
putchar(' ');
putchar(num2_tens + '0');
putchar(num2_units + '0');


if (!(num1 == 99 && num2 == 99))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}

