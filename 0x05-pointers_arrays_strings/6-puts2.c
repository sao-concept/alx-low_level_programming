#include "main.h"

/**
* puts2 - This function prints every other character of a string,
* starting with the first character, followed by a new line
* @str: pointer parameter
*/
void puts2(char *str)
{
int i;
int len = 0;

/* Calculate the length of the string */
while (str[len] != '\0')
{
len++;
}

/* Print every other character starting from the first character */
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}

