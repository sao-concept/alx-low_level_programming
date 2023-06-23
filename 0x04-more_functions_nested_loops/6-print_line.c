#include "main.h"

/**
* print_line - function to draw a straight line
* @n: a line should be drawn @n times
* Return: Always 0 (Success)
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int nLines;

for (nLines = 1; nLines <= n; nLines++)
{
_putchar('_');
}
_putchar('\n');
}

}
