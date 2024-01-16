/**
* malloc_checked -This function allocates memory using malloc
* @b: unsigned parameter
* Return: pointer to the allocated memory
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
void *i;

i = malloc(b);
if (i == NULL)
exit(98);
return (i);

}
