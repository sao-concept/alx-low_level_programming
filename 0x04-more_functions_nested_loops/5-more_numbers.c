/**
* more_numbers -to print 10 times the numbers,
* from 0 to 14
* @void: no parameter
* Return: Always 0 (Success)
*/

/* Include the necessary headers */
#include "main.h"

void more_numbers(void)
{
int i, pCount;
for (pCount = 0; pCount < 10; pCount++)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
_putchar('\n');

}
}
