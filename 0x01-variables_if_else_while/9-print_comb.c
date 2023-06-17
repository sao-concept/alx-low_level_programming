#include <stdio.h>

/**
 * main -Entry point
 * -----------------
 * Return: Always 0.
 */
int main(void)
{
	int possibleSDN;

	for (possibleSDN = 0; possibleSDN <= 9; possibleSDN++)
	{
		putchar((possibleSDN % 10) + '0');
		if (possibleSDN == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
