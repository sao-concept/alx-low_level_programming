/**
* factorial -This function returns the factorial of a
* given number
* @n: parameter
* Return: Always integer
*/

#include "main.h"

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
/* Recursive case: multiply n with factorial of (n-1) */
else
{
return (n * factorial(n - 1));
}
}
