/**
* print_alphabet -Entry point
* ---------------------
* Author: Azeez Saka
* Date: <20-06-2023>
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
