C Programming Tasks - Pointers and Arrays
This repository contains solutions to various C programming tasks related to pointers and arrays.

Files and Descriptions
0-reset_to_98.c

Function: void reset_to_98(int *n);
Updates the value pointed to by n to 98.
1-swap.c

Function: void swap_int(int *a, int *b);
Swaps the values of two integers a and b.
2-strlen.c

Function: int _strlen(char *s);
Returns the length of a string s.
3-puts.c

Function: void _puts(char *str);
Prints a string str followed by a new line.
4-print_rev.c

Function: void print_rev(char *s);
Prints a string s in reverse followed by a new line.
5-rev_string.c

Function: void rev_string(char *s);
Reverses a string s in place.
6-puts2.c

Function: void puts2(char *str);
Prints every other character of a string str, starting with the first character.
7-puts_half.c

Function: void puts_half(char *str);
Prints the second half of a string str.
8-print_array.c

Function: void print_array(int *a, int n);
Prints n elements of an array of integers a, separated by commas.
9-strcpy.c

Function: char *_strcpy(char *dest, char *src);
Copies the string pointed to by src to dest, including the terminating null byte (\0).
Compilation and Usage
Each task comes with a corresponding main.c file that demonstrates the usage of the implemented functions. To compile and run a specific task:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <task_file.c> -o <output_file>
./<output_file>
Replace <main.c>, <task_file.c>, and <output_file> with the appropriate filenames and commands.

Repository Information
GitHub repository: alx-low_level_programming
Directory: 0x05-pointers_arrays_strings

