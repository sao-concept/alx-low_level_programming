#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index -This function searches for an integer
* @array: pointer to array parameter
* @size: size of array parameter
* @cmp: pointer to the function parameter
* Return: Index of first matching element, (Success) or return -1 (Failure)
**/

int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);

}
return (-1);
}
