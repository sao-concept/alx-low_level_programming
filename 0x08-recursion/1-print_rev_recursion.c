/**
* _print_rev_recursion - This function prints a string
* in reverse.
* @s: character pointer parameter
* Return: void
*/

#include "main.h"

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
}

