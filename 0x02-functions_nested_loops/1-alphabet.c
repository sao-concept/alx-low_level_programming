/**
* main -Entry point
* ---------------------
* Author: Azeez Saka
* Date: <current date>
* Return: Always 0 (Success)
*/

/* Include the necessary headers */
#include "main.h"

void print_alphabet(void)
{
char lCase = 'a';

while (lCase <= 'z')
{

_putchar(lCase);
lCase++;

}
_putchar('\n');
}
