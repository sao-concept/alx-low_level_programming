/**
* _isdigit - Checks if digit is within 0 through 9
* Author: Azeez Saka
* @c: The digit to be checked
* Return: 1 if @c is uppercase, otherwise 0
*/

#include "main.h"
#include <stdio.h>

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1); /* c is a digit */
}
else
{
return (0); /* c is not a digit */
}
}
