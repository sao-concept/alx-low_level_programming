#include "main.h"
/**
* _strlen_recursion -This function prints the length of a string.
* @s: character pointer parameter
* Return: length
*/
int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}
/**
* strlen_helper -This function help check if s is palindrome.
* @s: base address
* @x: index1
* @y: index2
* Return: 1 if s is palindrome, 0 otherwise.
*/
int strlen_helper(char *s, int x, int y)
{
if (s[x] == s[y])
if (x > y / 2)
return (1);
else
return (strlen_helper(s, x + 1, y - 1));
else
return (0);
}
/**
* is_palindrome -This function help check if s is palindrome
* @s: base address
*
* Return: 1 if n is prime, 0 otherwise.
*/
int is_palindrome(char *s)
{
return (strlen_helper(s, 0, _strlen_recursion(s) - 1));
}
