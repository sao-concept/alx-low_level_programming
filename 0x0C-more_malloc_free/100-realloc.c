/**
* _realloc -This function help to reallocates a memory block using
* malloc and free
* @ptr: pointer parameter1
* @old_size: parameter2
* @new_size: parameter3
* Return: pointer
*/

#include <stdlib.h>
#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int count, n = new_size;
char *oldp = ptr;

if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (count = 0; count < n; count++)
p[count] = oldp[count];
free(ptr);
return (p);
}
