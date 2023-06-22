/**
* print_numbers -to print numbers from 0 through 9
*
* Return: Always (0)
*/

/* Include the necessary headers */
#include "main.h"

void print_numbers(void)
{
int i = 0;

while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
