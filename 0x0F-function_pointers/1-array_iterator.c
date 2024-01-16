#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator -This function executes a function given as
* a parameter on each element of an array
* @array: pointer to array parameter
* @size: size of array parameter
* @action: pointer to function parameter
* Return: Void
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int index;

if (array != NULL && size > 0 && action != NULL)
{
for (index = 0; index < size; index++)
action(array[index]);
}
}
