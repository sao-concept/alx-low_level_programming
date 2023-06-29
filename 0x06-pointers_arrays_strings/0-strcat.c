/**
* _strcat - Concatenates two strings
* @dest: Pointer to the destination string
* @src: Pointer to the source string
* Return: Pointer to the concatenated string
*/

#include "main.h"

char *_strcat(char *dest, char *src)
{
int len, count;

len = 0;
while (dest[len] != '\0')
{
len++;
}
for (count = 0; src[count] != '\0'; count++, len++)
{
dest[len] = src[count];
}
dest[len] = '\0';
return (dest);
}
