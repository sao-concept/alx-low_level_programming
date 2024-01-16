#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_char -This function print character
* @arg: parameter for list of arguments
*/
void print_char(va_list arg)
{
char c;

c = va_arg(arg, int);
printf("%c", c);
}

/**
* print_int -This function print integer numbers
* @arg: parameter for list of arguments
*/
void print_int(va_list arg)
{
int number;

number = va_arg(arg, int);
printf("%d", number);
}

/**
* print_float -This function prints float numbers
* @arg: parameter for list of arguments
*/
void print_float(va_list arg)
{
float number;

number = va_arg(arg, double);
printf("%f", number);
}

/**
* print_string -This function prints string value
* @arg: parameter for list of arguments
*/
void print_string(va_list arg)
{
char *str;

str = va_arg(arg, char *);

if (str == NULL)
{
printf("(nil)");
return;
}

printf("%s", str);
}

/**
* print_all -This function prints anything
* @format: constant pointer
* @...: unnamed arguments
*
* Description: Argument outside data type char, int, float,
*              and string were not captured.
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *separator = "";
printer_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};

va_start(args, format);

while (format && (*(format + i)))
{
j = 0;

while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(args);
separator = ", ";
}

i++;
}

printf("\n");

va_end(args);
}
