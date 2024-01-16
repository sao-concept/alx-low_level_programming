/**
* main -This program adds positive numbers·
* @argc: parameter1
* @argv: parameter2
* Return: Always 0 (Success)
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int count, num, sum = 0;
char *flag;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (count = 1; argv[count]; count++)
{
num = strtol(argv[count], &flag, 10);
if (*flag)
{
printf("Error\n");
return (1);
}
else
{
sum += num;
}
}
printf("%d\n", sum);

return (0);
}
