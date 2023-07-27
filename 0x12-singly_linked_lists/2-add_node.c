#include "lists.h"

/* Function prototype for _strlen */
int _strlen(const char *s);


/**
* add_node -This function add new node at the beginning
* @head: head of the list
* @str: string data of the list to be added
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(str);
new->next = *head;
*head = new;
return (*head);
}

/**
* _strlen -This function calculate the length of a const char string
* @s: string to work with
* Return: length of string.
*/

int _strlen(const char *s)
{
unsigned int idx;

for (idx = 0; s[idx] != '\0'; idx++)
{
}
return (idx);
}
