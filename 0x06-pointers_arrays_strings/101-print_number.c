#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description:use _putchar to print.
 */
void print_number(int n)
{
	unsigned int b;

	b = n;
	if (n < 0)
	{
		_putchar('-');
		b = -n;
	}
	if (b / 10 != 0)
	{
		print_number(b / 10);
	}
	_putchar((b % 10) + '0');
}




