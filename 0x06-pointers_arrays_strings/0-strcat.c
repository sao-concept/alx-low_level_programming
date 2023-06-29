/**
* _strcat - Concatenates two strings
* @dest: Pointer to the destination string
* @src: Pointer to the source string
* Return: Pointer to the concatenated string
*/

#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t i;

for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';

return (dest);
}
