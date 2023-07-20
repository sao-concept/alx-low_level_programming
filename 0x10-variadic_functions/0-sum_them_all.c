#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all -This function returns the sum of all its parameters
* @n: constant  paramter passed to the function.
* @...: unnamed parameter(s)
*
* Return: sum of numbers
*/
int sum_them_all(const unsigned int n, ...)
{
va_list numbers;
unsigned int index, sumNum = 0;

va_start(numbers, n);

for (index = 0; index < n; index++)
sumNum += va_arg(numbers, int);

va_end(numbers);

return (sumNum);
}
