#include <stdio.h>
/**
 * main -Entry point
 * ------------------
 * Return: Always 0 (Success)
 */
int main(void)
{
	char revLowerC;

	for (revLowerC = 'z'; revLowerC >= 'a'; revLowerC--)
	{
		putchar(revLowerC);
	}
	putchar('\n');
	return (0);
}
