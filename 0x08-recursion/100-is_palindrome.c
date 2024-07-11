#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end);
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Helper function to check if a
 * string is a palindrome recursively
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Returns the length of a string recursively
 * @s: The string to calculate the length of
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

