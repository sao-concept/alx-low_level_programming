#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
unsigned long int num1, num2, fNum, sumT;

num1 = 1;
num2 = 2;
sumT = 0;

for (i = 1; i <= 33; ++i)
{
if (num1 < 4000000 && (num2 % 2) == 0)
{
sumT = sumT + num1;
}
fNum = num1 + num2;
num1 = num2;
num2 = fNum;
}

printf("%lu\n", sumT);

return (0);
}
