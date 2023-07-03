#include "main.h"

/**
* _strstr -This function helps to locate a substring
*
* @haystack: the longer string to search
* @needle: the first occurrence of the substring
*
* Return: A pointer beg of substring or @Null if it not foound.
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int count1 = 0, count2 = 0;

while (haystack[count1])
{
while (needle[count2] && (haystack[count1] == needle[0]))
{
if (haystack[count1 + count2] == needle[count2])
count2++;
else
break;
}
if (needle[count2])
{
count1++;
count2 = 0;
}
else
return (haystack + count1);
}
return (0);
}
