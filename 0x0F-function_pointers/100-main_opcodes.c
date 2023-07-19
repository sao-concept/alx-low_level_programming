#include <stdlib.h>
#include <stdio.h>

/**
* print_opcodes -This function print opcodes of this program
* @a: pointer parameter
* @n: integer parameter
*
* Return: void
**/
void print_opcodes(char *a, int n)
{
int index;

for (index = 0; index < n; index++)
{
printf("%.2hhx", a[index]);
if (index < n - 1)
printf(" ");
}
printf("\n");
}

/**
* main -This function print the opcodes of its main function
* @argc: count argument parameter
* @argv: array argument parameter
*
* Return: always O
*/
int main(int argc, char **argv)
{
int number;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

number = atoi(argv[1]);
if (number < 0)
{
printf("Error\n");
exit(2);
}

print_opcodes((char *)&main, number);
return (0);
}
