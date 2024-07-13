#include "main.h"

/**
 * main - Entry point. Prints the number of arguments
 *  passed into the program.
 * @argc: Number of arguments passed (including the program's name).
 * @argv: Array of pointers to strings containing
 * the arguments.
 *
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
(void)argv;
_putchar(argc - 1 + '0');
_putchar('\n');
return (0);
}
