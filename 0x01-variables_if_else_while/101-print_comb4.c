/**
 * main -Entry point
 * ---------------------
 * Author: Azeez Saka
 * Date: <17-06-2023>
 * Return: Always 0 (Success)
 */

// Include the necessary headers
#include <stdio.h>

int main(void)
{
/* Program that prints all possible different combinations of three  digits. */

	int firstDig;
	int secondDig;
	int thirdDig;

	for (firstDig = 0; firstDig <= 8; firstDig++)
	{
		for (secondDig = firstDig + 1; secondDig <= 9; secondDig++)
		{
			for (thirdDig = secondDig + 1; thirdDig <= 9;
					thirdDig++)
			{

			putchar((firstDig % 10) + '0');
			putchar((secondDig % 10) + '0');
			putchar((thirdDig % 10) + '0');

			if (firstDig != 8 || secondDig != 9 || thirdDig != 10)
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
