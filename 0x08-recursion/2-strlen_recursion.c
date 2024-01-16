/**
* _strlen_recursion - This function returns the
* length of a string
* @s: character pointer parameter
* Return: length (len) of string
*/

#include "main.h"

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
