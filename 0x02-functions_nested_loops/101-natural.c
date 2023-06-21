#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples
* of 3 or 5 below 1024
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int sumThree, sumFive, sumTotal;
int i;

sumThree = 0;
sumFive = 0;
sumTotal = 0;

for (i = 0; i < 1024; ++i)
{
if ((i % 3) == 0)
{
sumThree = sumThree + i;
}
else if ((i % 5) == 0)
{
sumFive = sumFive + i;
}
}
sumTotal = sumThree + sumFive;
printf("%lu\n", sumTotal);
return (0);
}
