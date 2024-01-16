#include "main.h"

/**
* flip_bits -This function returns the number of bits
* need to flip to get from one number to another.
* @n: parameter1.
* @m: parameter2.
*
* Return: 1 on Success, otherwise -1.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int idx1, numFlips = 0;
unsigned long int idx2 = sizeof(unsigned long int) * 8;

for (idx1 = 0; idx1 < idx2; idx1++)
{
if ((m & 1) != (n & 1))
numFlips += 1;
n = n >> 1;
m = m >> 1;
}
return (numFlips);
}
