#include "main.h"

/**
* print_square - prints a square, followed by a new line;
* @size: size of the square
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int sqr, i;

for (sqr = 0; sqr < size; sqr++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
