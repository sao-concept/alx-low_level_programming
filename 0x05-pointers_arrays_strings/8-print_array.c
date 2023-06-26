#include "main.h"

/**
* print_array - This function prints an array of numbers
* @a: Pointer to the array
* @n: Number of elements in the array
*/
void print_array(int *a, int n)
{
int i;
if (a == NULL || n <= 0)
{
return; /* Nothing to print */
}

for (i = 0; i < n; i++)
{
_putchar(a[i] + '9'); /* Print the current element */

if (i != n - 1)
{
_putchar(','); /* Print comma unless it's the last element */
_putchar(' '); /* Print space after comma */
}
}

_putchar('\n'); /* Print a new line after printing the array */
}

