#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * ------------------
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is greater than 0: is positive", n);
	}
			else if (n == 0)
			{
				printf("%d is 0: is zero", n);
			}
			else
			{
				printf("%d is less than 0: is negative", n);
			}
	return (0);
}
