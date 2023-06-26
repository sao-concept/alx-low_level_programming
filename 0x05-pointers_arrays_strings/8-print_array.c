#include <stdio.h>
#include "main.h"

/**
* print_array - This function prints an array of numbers
* @a: Pointer to the array
* @n: Number of elements in the array
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[i]);
else
printf(", %d", a[i]);
}
printf("\n");
}
