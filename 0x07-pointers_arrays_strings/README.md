0. memset
mandatory

Write a function that fills memory with a constant byte.

Prototype:

c
Copy code
char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b.
Returns a pointer to the memory area s.
FYI: The standard library provides a similar function: memset. Run man memset to learn more.

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x07-pointers_arrays_strings
File: 0-memset.c
1. memcpy
mandatory

Write a function that copies memory area.

Prototype:

c
Copy code
char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest.
Returns a pointer to dest.
FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x07-pointers_arrays_strings
File: 1-memcpy.c
2. strchr
mandatory

Write a function that locates a character in a string.

Prototype:

c
Copy code
char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.
FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x07-pointers_arrays_strings
File: 2-strchr.c
3. strspn
mandatory

Write a function that gets the length of a prefix substring.

Prototype:

c
Copy code
unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept.
FYI: The standard library provides a similar function: strspn. Run man strspn to learn more.

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x07-pointers_arrays_strings
File: 3-strspn.c
4. strpbrk
mandatory

Write a function that searches a string for any of a set of bytes.

Prototype:

c
Copy code
char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept.
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x07-pointers_arrays_strings
File: 4-strpbrk.c
5. strstr
mandatory

Write a function that locates a substring.

Prototype:

c
Copy code
char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared.
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x07-pointers_arrays_strings
File: 5-strstr.c
6. Chess is mental torture
mandatory

Write a function that prints the chessboard.

Prototype:

c
Copy code
void print_chessboard(char (*a)[8]);
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x07-pointers_arrays_strings
File: 7-print_chessboard.c
7. The line of life is a ragged diagonal between duty and desire
mandatory

Write a function that prints the sum of the two diagonals of a square matrix of integers.

Prototype:

c
Copy code
void print_diagsums(int *a, int size);
Format: see example
You are allowed to use the standard library.
Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x07-pointers_arrays_strings
File: 8-print_diagsums.c
