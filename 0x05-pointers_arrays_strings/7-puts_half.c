#include "main.h"

/**
* puts_half - This function prints half of a string,
* followed by a new line
* @str: pointer parameter
*/
void puts_half(char *str)
{
int i, stdx;
int len = 0;

/* Calculate the length of the string */
while (str[len] != '\0')
{
len++;
}

/* Calculate the starting index for printing half of the string */
stdx = len / 2;

/* Print every character starting from the calculated index */
for (i = stdx; i < len; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
