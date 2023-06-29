/**
* print_number -This function prints an integer
* @n: parameter
* Return: void
*/

#include "main.h"

void print_number(int n)
{
unsigned int numb;
/*check if number is negative*/
numb = n;
if (n < 0)
{
_putchar(45);
numb = -n;
}
/* print number by recursion*/
if (numb / 10)
{
print_number(numb / 10);
}
_putchar((numb % 10) + '0');
}
