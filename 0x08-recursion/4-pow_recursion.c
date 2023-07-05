/**
* _pow_recursion - This function returns the value of
* x raised to the power of y
* @x: base value
* @y: exponent value
* Return: an integer value
*/

#include "main.h"

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return -1;
}
else if (y == 0)
{
return 1;
}
else
{
return x * _pow_recursion(x, y - 1);
}
}

