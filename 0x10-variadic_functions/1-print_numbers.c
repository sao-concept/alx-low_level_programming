#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - Print numbers separated by a given separator
* @separator: The string separator to be printed between numbers
* @n: The number of arguments passed after the separator
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list numbers;
va_start(numbers, n);

for (i = 0; i < n; ++i)
{
printf("%d", va_arg(numbers, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(numbers);
}

