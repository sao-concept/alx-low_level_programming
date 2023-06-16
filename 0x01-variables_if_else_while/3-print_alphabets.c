#include <stdio.h>
/**
 * main -Entry point
 * ------------------
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerAlpha;
	char upperAlpha;

	for (lowerAlpha = 'a'; lowerAlpha <= 'z'; lowerAlpha++)
	{
		putchar(lowerAlpha);
	}
		for (upperAlpha = 'A'; upperAlpha <= 'Z'; upperAlpha++)
		{
			putchar(upperAlpha);
		}
	putchar('\n');
	return (0);
}
