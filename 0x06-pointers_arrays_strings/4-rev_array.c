
/**
* reverse_array -This function reverses the content of an array of integers
* @a: parameter1
* @n: parameter2
* Return: void
*/

#include "main.h"

void reverse_array(int *a, int n)
{
int tmp, count;

n = n - 1;
count = 0;
while (count <= n)
{
tmp = a[count];
a[count++] = a[n];
a[n--] = tmp;
}
}
