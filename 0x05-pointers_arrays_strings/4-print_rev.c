/**
* print_rev -This function prints a string,
* in reverse, followed by a new line
* @s: pointer parameter
* Return: Always 0 (Success)
*/

#include "main.h"
#include <string.h>
void print_rev(char *s)
{
int i, sLength;
sLength = strlen(s);

for (i = (sLength - 1); i >= (s[i] != '\0'); i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
