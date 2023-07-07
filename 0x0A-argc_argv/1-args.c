/**
* main -This program help to print the number of
* arguments passed into it`
* @argc: parameter1
* @argv: parameter2
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(int argc, char **argv)
{
(void)argv;

printf("%d\n", argc - 1);
return (0);
}
