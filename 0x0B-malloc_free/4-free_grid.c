/**
* free_grid -This function frees a 2 dimensional grid
* created by another function named  alloc_grid.
* @grid: pointer parameter1
* @height: parameter2
* Return: free another pointer
*/

#include <stdlib.h>
#include "main.h"

void free_grid(int **grid, int height)
{
int count;

for (count = 0; count < height; count++)
free(grid[count]);
free(grid);
}
