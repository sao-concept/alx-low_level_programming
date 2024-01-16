#include "lists.h"

int _strlen(const char *s);

/**
* add_node_end -This function adds a new node to the end of a linked list.
* @head: A double pointer to the head of the linked list.
* @str: The string to be copied to the 'str' member of the linked list.
* Return: A pointer to the newly created node.
*/
list_t *add_node_end(list_t **head, const char *str)
{
char *dup_str;
list_t *new_node, *last_node;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

dup_str = strdup(str);
if (!dup_str)
{
free(new_node);
return (NULL);
}

new_node->str = dup_str;
new_node->len = _strlen(str);
new_node->next = NULL;

if (!*head)
*head = new_node;
else
{
last_node = *head;
while (last_node->next)
last_node = last_node->next;
last_node->next = new_node;
}

return (*head);
}

/**
* _strlen -This function returns the length of a string.
* @s: The string whose length is to be determined.
* Return: The length of the string 's'.
*/
int _strlen(const char *s)
{
int idx = 0;

while (*s++)
idx++;
return (idx);
}

