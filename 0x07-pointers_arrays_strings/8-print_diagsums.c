#include "main.h"
#include <stdio.h>

/**
* print_diagsums -This function prints the sums of two diagonals
* of a square matrix
* @a: pointer to start of matrix
* @size: width of matrix column
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int count1, count2, m, n = 0, o = 0;

for (count1 = 0; count1 < size; count1++)
{
m = (count1 * size) + count1;
n += *(a + m);
}
for (count2 = 0; count2 < size; count2++)
{
m = (count2 * size) + (size - 1 - count2);
o += *(a + m);
}
printf("%d, %d\n", n, o);
}
