/**
* array_range -This function help to creates an array of integers
* @min: parameter1
* @max: parameter2
* Return: pointer to the newly created array
*/

#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
int *pN;
int n, sizeN;

if (min > max)
return (NULL);

sizeN = max - min + 1;

pN = malloc(sizeof(int) * sizeN);

if (pN == NULL)
return (NULL);

for (n = 0; min <= max; n++)
pN[n] = min++;

return (pN);
}
