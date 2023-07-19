#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
* get_op_func -This function compare string
* @s: pointer parameter
* Return: function and operator when equal
**/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int index = 0;

while (ops[index].op != NULL)
{
if (strcmp(ops[index].op, s) == 0)
return (ops[index].f);
index++;
}
return (NULL);
}
