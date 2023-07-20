#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings -This function prints strings, followed by a new line
* @separator: constant string parameter1
* @n: constant unsigned int parameter2
* @...: unnamed parameters
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;

va_start(strings, n);

for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(strings);
}
