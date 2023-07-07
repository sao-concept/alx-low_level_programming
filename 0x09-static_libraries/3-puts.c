/**
* _puts -This function prints a string,
* followed by a new line to standard output
* @str: pointer parameter
* Return: Always 0 (Success)
*/

#include "main.h"
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
