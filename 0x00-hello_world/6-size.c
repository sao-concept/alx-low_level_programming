#include <stdio.h>
/**
 * main -Entry point
 * ------------------
 * Return: Always 0 (Success)
 */
int main(void)
{
	char size_char = sizeof(char);
	printf("Size of a char: %lu byte(s)\n", (unsigned long)size_char);

	int size_int = sizeof(int);
	printf("Size of a int: %lu byte(s)\n", (unsigned long)size_int);

	long int size_long_int = sizeof(long int);
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)size_long_int);

	long long int size_longl_int = sizeof(long long int);
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)size_longl_int);

	float size_of_float = sizeof(float);
	printf("Size of a float: %lu byte(s)\n", (unsigned long)size_of_float);
	return (0);
}
