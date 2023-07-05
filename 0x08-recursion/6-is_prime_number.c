#include "main.h"

/**
* prime_helper -This function help to see if number is prime
* @x: parameter1
* @y: parameter2
* Return:integer value
*/
int prime_helper(int x, int y)
{
if (y < 2 || y % x == 0)
return (0);
else if (x > y / 2)
return (1);
else
return (prime_helper(x + 1, y));
}

/**
* is_prime_number -This function check if number is prime
* @n: parameter
* Return:integer value
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (prime_helper(2, n));
}
