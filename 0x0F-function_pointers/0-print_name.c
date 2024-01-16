#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

/**
* print_name -This function prints a name
* @name: pointer parameter1
* @f: pointer parameter2
* Return: Nothing
**/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && *name != '\0' && f != NULL)
f(name);
}
