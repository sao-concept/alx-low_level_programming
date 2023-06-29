
/**
* cap_string -This function capitalizes all words of a string
* @s: parameter
* Return: character value 's'
*/

#include "main.h"

char *cap_string(char *s)
{
int counter;

/*  scan through string */
counter = 0;
while (s[counter] != '\0')
{/* if next character after counter is a char, capitalise it */
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if (s[counter] == ' ' || s[counter] == '\t' || s[counter] == '\n'
|| s[counter] == ',' || s[counter] == ';' || s[counter] == '.'
|| s[counter] == '.' || s[counter] == '!' || s[counter] == '?'
|| s[counter] == '"' || s[counter] == '(' || s[counter] == ')'
|| s[counter] == '{' || s[counter] == '}')
{
if (s[counter + 1] >= 97 && s[counter + 1] <= 122)
{
s[counter + 1] = s[counter + 1] - 32;
}
}
counter++;
}
return (s);
}
