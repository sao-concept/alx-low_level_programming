
/**
* string_toupper -This function changes all lowercase letters of a string to
* uppercase
* @x: parameter
* Return: character value 'x'
*/

#include "main.h"

char *string_toupper(char *x)
{
int len;

len = 0;

while (x[len] != '\0')
{
if (x[len] >= 97 && x[len] <= 122)
{
x[len] = x[len] - 32;
}
len++;
}
return (x);
}
