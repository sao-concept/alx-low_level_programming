/**
* main -This program prints all arguments it receives.
* @argc: parameter1
* @argv: parameter2
* Return: Always 0 (Success)
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
