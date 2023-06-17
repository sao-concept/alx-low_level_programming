
/**
 * main -Entry point
 * ---------------------
 * Author: Azeez Saka
 * Date: <current date>
 * Return: Always 0 (Success)
 */

/* Program that prints all possible different combinations of two digits. */

#include <stdio.h>

int main(void)
{
	int firstDig;
	int secondDig;

	for (firstDig = 0; firstDig <= 8; firstDig++)
	{
		for (secondDig = firstDig + 1; secondDig <= 9; secondDig++)
		{
			putchar((firstDig % 10) + '0');
			putchar((secondDig % 10) + '0');

			if (firstDig != 8 || secondDig != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

