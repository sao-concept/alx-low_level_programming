/**
* alloc_grid -This function returns a pointer
* to a 2 dimensional array of integers.
* @width: parameter1
* @height: parameter2
* Return: NULL on failure, otherwise a pointer
*/

#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
int **array, x, y;
int len = width * height;

if (len <= 0)
return (NULL);

array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
array[x] = (int *)malloc(sizeof(int) * width);
if (array[x] == NULL)
{
for (x--; x >= 0; x--)
free(array[x]);
free(array);
return (NULL);
}
}

for (x = 0; x < height; x++)
for (y = 0; y < width; y++)
array[x][y] = 0;

return (array);
}
