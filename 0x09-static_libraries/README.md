# Static Libraries Project

This project focuses on creating and using static libraries in C. It includes multiple functions and a script to automate the creation of static libraries.

## Functions

The following functions are implemented in this project:

- `int _putchar(char c);`: Outputs a character.
- `int _islower(int c);`: Checks if a character is lowercase.
- `int _isalpha(int c);`: Checks if a character is alphabetic.
- `int _abs(int n);`: Computes the absolute value of an integer.
- `int _isupper(int c);`: Checks if a character is uppercase.
- `int _isdigit(int c);`: Checks if a character is a digit.
- `int _strlen(char *s);`: Returns the length of a string.
- `void _puts(char *s);`: Prints a string.
- `char *_strcpy(char *dest, char *src);`: Copies a string.
- `int _atoi(char *s);`: Converts a string to an integer.
- `char *_strcat(char *dest, char *src);`: Concatenates two strings.
- `char *_strncat(char *dest, char *src, int n);`: Concatenates two strings with a limit.
- `char *_strncpy(char *dest, char *src, int n);`: Copies a string with a limit.
- `int _strcmp(char *s1, char *s2);`: Compares two strings.
- `char *_memset(char *s, char b, unsigned int n);`: Fills memory with a constant byte.
- `char *_memcpy(char *dest, char *src, unsigned int n);`: Copies memory area.
- `char *_strchr(char *s, char c);`: Locates a character in a string.
- `unsigned int _strspn(char *s, char *accept);`: Gets the length of a prefix substring.
- `char *_strpbrk(char *s, char *accept);`: Searches a string for any of a set of bytes.
- `char *_strstr(char *haystack, char *needle);`: Locates a substring.

## Script

A script is provided to automate the creation of a static library from all `.c` files in the current directory:

- `create_static_lib.sh`: Creates a static library `liball.a` from all `.c` files in the current directory.

### Usage

To create the static library, run the following command in your terminal:

```sh
./create_static_lib.sh

rcs libmy.a
rcs libmy.a
rcs libmy.a
rcs libmy.a
rcs libmy.a
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
-t libmy.a
rcs libmy.a
rcs libmy.a
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
rc libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
libmy.a
rc libmy.a
-rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
-rc libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
-t libmy.a
-rc libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
-t libmy.a
-rc libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
-t libmy.a
rcs libmy.a 0-isupper.o 0-memset.o 0-putchar.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o
rcs libmy.a 0-isupper.o 0-memset.o 0-strcat.o 100-atoi.o 1-isdigit.o 1-memcpy.o 1-strncat.o 2-strchr.o 2-strlen.o 2-strncpy.o 3-islower.o 3-puts.o 3-strcmp.o 3-strspn.o 4-isalpha.o 4-strpbrk.o 5-strstr.o 6-abs.o 9-strcpy.o _putchar.o
-t libmy.a
