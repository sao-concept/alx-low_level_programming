/**
* print_line -This function print a buffer
* @c: parameter1
* @s: parameter2
* @l: parameter3
* Return: Always void
*/

#include "main.h"
#include <stdio.h>

void print_buffer(char *b, int size)
{
int a, b;
for (a = 0; a <= 9; a++)
{
if (a <= s)
printf("%02x", c[l * 10 + a]);
else
printf("  ");
if (a % 2)
putchar(' ');
}
for (b = 0; b <= s; b++)
{
if (c[l * 10 + b] > 31 && c[l * 10 + b] < 127)
putchar(c[l * 10 + b]);
else
putchar('.');
}
}

/**
* print_buffer - prints a buffer
* @b: buffer to print
* @size: size of buffer
*
* Return: void
*/
void print_buffer(char *b, int size)
{
int i;
for (i = 0; i <= (size - 1) / 10 && size; i++)
{
printf("%08x: ", i * 10);
if (i < size / 10)
{
print_line(b, 9, i);
}
else
{
print_line(b, size % 10 - 1, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
