
/**
* _strncpy -This function copies a string
* @dest: parameter1
* @src: parameter2
* @n: parameter3
* Return: @dest (Success)
*/

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
int byteCounter;

for (byteCounter = 0; byteCounter < n &&
src[byteCounter] != '\0'; byteCounter++)
dest[byteCounter] = src[byteCounter];
for (; byteCounter < n; byteCounter++)
dest[byteCounter] = '\0';

return (dest);
}
