/**
* _strncat - Concatenates two strings up to a specified number of characters
* @dest: Pointer to the destination string
* @src: Pointer to the source string
* @n: Maximum number of characters to concatenate from src
* Return: Pointer to the concatenated string
*/

#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
int len, count;

len = 0;
while (dest[len] != '\0')
{
len++;
}
for (count = 0; count < n && src[count] != '\0'; count++, len++)
{
dest[len] = src[count];
}
dest[len] = '\0';
return (dest);
}
