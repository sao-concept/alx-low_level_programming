/**
* rev_string -This function reverses a string
* @s: pointer parameter
*/

#include "main.h"
#include <string.h>
void rev_string(char *s)
{
int i, j;
char tmp;
int len = strlen(s);

for (i = 0, j = len - 1; i <  j; i++, j--)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}

}
