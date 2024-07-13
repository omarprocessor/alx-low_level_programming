#include <stdio.h>
/**
 * main - Entry point. Prints the program's name.
 * @argc: Number of arguments passed (including the program's name).
 * @argv: Array of pointers to strings containing the arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
(void)argc; /* Unused parameter */
printf("%s\n", argv[0]);
return (0);
}
