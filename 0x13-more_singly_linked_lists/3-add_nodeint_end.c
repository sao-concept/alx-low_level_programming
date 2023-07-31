#include "lists.h"

/**
* add_nodeint_end -This function adds a new node
* at the end of a listint_t list.
* @head: head node
* @n: new node element
* Return: new element address, otherwise NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *anotherNode;
listint_t *tmpNode;

tmpNode = *head;

anotherNode = malloc(sizeof(listint_t));
if (anotherNode == NULL)
{
return (NULL);
}

anotherNode->n = n;
anotherNode->next = NULL;

if (*head == NULL)
{
*head = anotherNode;
return (anotherNode);
}

while (tmpNode->next != NULL)
{
tmpNode = tmpNode->next;
}
tmpNode->next = anotherNode;

return (anotherNode);
}
