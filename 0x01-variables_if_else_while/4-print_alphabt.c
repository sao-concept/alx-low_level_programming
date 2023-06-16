#include <stdio.h>
/**
 * main -Entry point
 * ------------------
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerAlpha;

	for (lowerAlpha = 'a'; lowerAlpha <= 'z'; lowerAlpha++)
	{
		if
			(lowerAlpha != 'q' && lowerAlpha != 'e')
		putchar(lowerAlpha);
	}
	putchar('\n');
	return (0);
}
