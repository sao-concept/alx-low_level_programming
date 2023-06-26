
/**
* *_strcpy -This function copies string pointed
* to by src, including the terminating null byte
* @dest: pointer parameter1
* @src: pointer parameter2
* Return: Always 0 (Success)
*/

#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;

while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
