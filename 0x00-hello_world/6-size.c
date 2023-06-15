#include <stdio.h>
/**
 * main -Entry point
 * ------------------
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	float f;
	long long int lli;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of a int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	return (0);
}
