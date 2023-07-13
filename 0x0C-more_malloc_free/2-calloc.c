/**
* _calloc -This function help to allocates memory for an array, using malloc
* @nmemb: unsigned parameter1
* @size: unsigned parameter2
* Return: a pointer to the allocated memory
*/

#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
unsigned int y;

if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(nmemb * size);
if (x == NULL)
return (NULL);
for (y = 0; y < (nmemb * size); y++)
x[y] = 0;
return (x);
}
