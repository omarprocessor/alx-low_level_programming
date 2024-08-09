#include "main.h"
#include <unistd.h>



/**
 * _putchar - Outputs a character
 * @c: The character to print
 *
 * Return: The character printed
 */
int _putchar(char c)
{
return write(1, &c, 1);
}


