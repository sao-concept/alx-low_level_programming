/**
* _puts_recursion - This function prints a string,
* followed by a new line using recursion
* @s: string pointer parameter
* Return: void
*/

#include "main.h"

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);
}

