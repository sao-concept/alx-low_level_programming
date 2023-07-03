#include "main.h"

/**
* _memset -This function fill the first @n bytes of the memory area pointed
* to by @s with the constant byte @b
*
* @n: bytes of the memory area pointed to by @s
*
* @s: with the constant byte @b
*
* @b: memory area pointer
*
* Return: A pointer to the memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int count = 0;

while (count < n)
{
s[count] = b;
count++;
}

return (s);
}
