#include "main.h"

/**
* str_helper -This function help to check if two strings are identical.
* @s1: string_1 base address.
* @s2: string_2 base address.
* @x: index1.
* @y: index2
* Return: 1 if s is palindrome, 0 otherwise.
*/
int str_helper(char *s1, char *s2, int x, int y)
{
if (s1[x] == '\0' && s2[y] == '\0')
return (1);
if (s1[x] == s2[y])
return (str_helper(s1, s2, x + 1, y + 1));
if (s1[x] == '\0' && s2[y] == '*')
return (str_helper(s1, s2, x, y + 1));
if (s2[y] == '*')
return (str_helper(s1, s2, x + 1, y) || str_helper(s1, s2, x, y + 1));
return (0);
}
/**
* wildcmp -This function help check if
* strings could be considered identical
* @s1: base address for string.
* @s2: base address for string.
*
* Return: 1 if are considered identical.
*/
int wildcmp(char *s1, char *s2)
{
return (str_helper(s1, s2, 0, 0));
}
