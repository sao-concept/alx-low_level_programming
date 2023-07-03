#include "main.h"
#include <stddef.h>

/**
* _strpbrk -This function searches a string for any of a set of bytes
*
* @s:first occurrence in the string
*
* @accept: matches one of the bytes, or @NULL if no such byte
*
* Return: A pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
int count;
while (*s)
{
for (count = 0; accept[count]; count++)
{
if (*s == accept[count])
return (s);
}
s++;
}
return (NULL);
}
