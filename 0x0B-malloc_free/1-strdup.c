/**
* _strdup -This function returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter.
* @str: pointer parameter
* Return: pointer character
*/

#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
char *copy;
int count, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

copy = (char *)malloc((sizeof(char) * len) +1);
if (copy == NULL)
return (NULL);

for (count = 0; count < len; count++)
copy[count] = str[count];
copy[len] = '\0';

return (copy);
}
