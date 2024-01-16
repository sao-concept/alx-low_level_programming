/**
* create_array -This function creates an array of chars,
* and initializes it with a specific char.
* @size: parameter1
* @c: parameter2
* Return: pointer character
*/

#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int count;

if (size == 0)
return (NULL);

array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);

for (count = 0; count < size; count++)
array[count] = c;

return (array);
}
