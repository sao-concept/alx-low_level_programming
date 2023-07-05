#include "main.h"

/**
* sqrt_helper -This function help to checks for the square root
* @x: parameter1
* @y: parameter2
*
* Return: integer value
*/
int sqrt_helper(int x, int y)
{
if (x * x == y)
return (x);
if (x * x > y)
return (-1);
return (sqrt_helper(x + 1, y));
}

/**
* _sqrt_recursion -This function returns
* the natural square root of a number
* @n: parameter
* Return: Natural square root or -1
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_helper(1, n));
}
