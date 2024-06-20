#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints a specific message to the standard output
 * using the write() system call. It returns 1 to indicate success.
 *
 * Return: Always 1 (indicating success)
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);
	return (1);
}

