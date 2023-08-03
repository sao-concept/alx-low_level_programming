#include "main.h"
int _pow(int a, int b);

/**
* binary_to_uint -This function converts a binary number to an unsigned int.
* @b: parameter pointer to string of 0 and 1 character
*
* Return: decimal/int equivalent of binary, otherwise
* 0, if parameter b is NULL or has a non binary digit
*/

unsigned int binary_to_uint(const char *b)
{
int sizeNum = 0;
int placeValue;
int idx = 0;
int myInteger = 0;

/*Calculate size of string*/
while (b[idx])
{
sizeNum++;
idx++;
}
placeValue = sizeNum - 1;

if (b == NULL)
return (0);

idx = 0;
while (b[idx])
{
if (b[idx] == '0' || b[idx] == '1')
{
myInteger = myInteger + ((b[idx] - '0') * _pow(2, placeValue));
placeValue--;
}
else
{
return (0);
}
idx++;
}

return (myInteger);
}

/**
* _pow -This function calculates (a^b)
* @a: base parameter
* @b: power parameter
*
* Return: value of a^b
*/

int _pow(int a, int b)
{
int value = 1;

while (b)
{
value = value *a;
b--;
}
return (value);
}
