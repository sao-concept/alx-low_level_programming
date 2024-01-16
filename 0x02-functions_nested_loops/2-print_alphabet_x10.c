#include "main.h"
/**
* print_alphabet_x10 -print lowercase alphabet
* 10 times, followed by a newline
*/
void print_alphabet_x10(void)
{
char lCase;
int i = 0;

while (i < 10)
{
lCase = 'a';
while (lCase <= 'z')
{
_putchar(lCase);
lCase++;
}
_putchar('\n');
i++;
}
}
