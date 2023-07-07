/**
* main -This program prints its name, followed by newline
* using main as an Entry Point
* @argc: parameter1
* @argv: parameter2
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(int argc, char **argv)
{
(void)argc;

printf("%s\n", argv[0]);
return (0);
}
