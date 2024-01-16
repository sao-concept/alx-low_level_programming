#include "main.h"

/**
* get_endianness -This function that checks the endianness.
* Return: 0, otherwise 1
*/
int get_endianness(void)
{
unsigned int idx = 1;
char *c = (char *) &idx;

return (*c);
}
