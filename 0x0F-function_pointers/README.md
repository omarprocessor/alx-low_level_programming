0x0F. Function Pointers
Task 0: What's my name
Description:
Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0F-function_pointers
File: 0-print_name.c
Task 1: If you spend too much time thinking about a thing, you'll never get it done
Description:
Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0F-function_pointers
File: 1-array_iterator.c
Task 2: To hell with circumstances; I create opportunities
Description:
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));
Returns the index of the first element for which the cmp function does not return 0.
If no element matches or if size <= 0, return -1.
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0F-function_pointers
File: 2-int_index.c
Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at
Description:
Write a program that performs simple operations.

Usage: calc num1 operator num2
Operators: +, -, *, /, %
Files Required:
3-calc.h
3-op_functions.c
3-get_op_func.c
3-main.c
Constraints:

If the number of arguments is incorrect, print Error and exit with status 98.
If the operator is invalid, print Error and exit with status 99.
If division or modulo by 0 is attempted, print Error and exit with status 100.
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0F-function_pointers
Files: 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
Task 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
Description:
Write a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes
Output the opcodes in hexadecimal, lowercase, each opcode two chars long, ending with a new line.
Constraints:

If the number of arguments is incorrect, print Error and exit with status 1.
If the number of bytes is negative, print Error and exit with status 2.
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0F-function_pointers
File: 100-main_opcodes.c
