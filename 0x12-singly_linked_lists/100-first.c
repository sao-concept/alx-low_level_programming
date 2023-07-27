#include <stdio.h>

/**
* first -This function executed before main function
* Return: void
*/

void __attribute__ ((constructor)) first()
{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back!\n");
}
