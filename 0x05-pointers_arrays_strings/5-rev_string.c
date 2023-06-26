/**
* rev_string -This function reverses a string
* @s: pointer parameter
*/

#include "main.h"
#include <string.h>
void rev_string(char *s)
{
int i;
int len = strlen(s);

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
