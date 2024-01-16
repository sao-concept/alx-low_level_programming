/**
 * main -Entry point
 * ---------------------
 * Author: Azeez Saka
 * Date: <17-06-2023>
 * Return: Always 0 (Success)
 */

#include <stdio.h>

/*
 * Program that prints all possible combinations of two two-digit numbers from
 * 0-99 which are separated by comma, followed by space
 */

int main(void)
{
	int digSet1;
	int digSet2;

	for (digSet1 = 0; digSet1 < 100; digSet1++)
	{
		for (digSet2 = 0; digSet2 < 100; digSet2++)
		{
			if (digSet1 < digSet2)
			{
				putchar((digSet1 / 10) + 48);
				putchar((digSet1 % 10) + 48);
				putchar(' ');
				putchar((digSet2 / 10) + 48);
				putchar((digSet2 % 10) + 48);
				if (digSet1 != 98 || digSet2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
		return (0);
}
