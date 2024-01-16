/**
* _isupper - Checks if a character is an uppercase letter.
* Author: Azeez Saka
* @c: The character to be checked
* Return: 1 if @c is uppercase, otherwise 0
*/

#include "main.h"
#include <stdio.h>

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1); /* character is uppercase */
}
else
{
return (0); /* character is not uppercase */
}
}
