/**
* main -This program prints the minimum number
* of coins to make change for an amount of money
* @argc: parameter1
* @argv: parameter2
* Return: Always 0 (Success)
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int total, count;
unsigned int index;
char *p;
int cents[] = {25, 10, 5, 2};

if (argc != 2)
{
printf("Error\n");
return (1);
}

total = strtol(argv[1], &p, 10);
count = 0;

if (!*p)
{
while (total > 1)
{
for (index = 0; index < sizeof(cents[index]); index++)
{
if (total >= cents[index])
{
count += total / cents[index];
total = total % cents[index];
}
}
}
if (total == 1)
count++;
}
else
{
printf("Error\n");
return (1);
}

printf("%d\n", count);
return (0);
}
