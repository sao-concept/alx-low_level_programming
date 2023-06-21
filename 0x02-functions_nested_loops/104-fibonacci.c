#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2
* followed by a new line
* Return: ALways 0 (Success)
*/
int main(void)
{
unsigned long int i, num1, num2, num11, num12, num21, num22;

num1 = 1;
num2 = 2;

printf("%lu", num1);

for (i = 1; i < 91; i++)
{
printf(", %lu", num2);
num2 = num2 + num1;
num1 = num2 - num1;
}

num11 = num1 / 1000000000;
num12 = num1 % 1000000000;
num21 = num2 / 1000000000;
num22 = num2 % 1000000000;

for (i = 92; i < 99; ++i)
{
printf(", %lu", num11 + (num12 / 1000000000));
printf("%lu", num22 % 1000000000);
num21 = num21 + num11;
num11 = num21 - num11;
num21 = num21 + num12;
num12 = num22 - num12;
}

printf("\n");

return (0);
}
