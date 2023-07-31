#include "lists.h"

/**
* add_nodeint -This function adds a new node
* at the beginning of a listint_t list.
* @head: head node
* @n: integer value
*
* Return: new element address, otherwise NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *anotherNode;

if (head == NULL)
{
return (NULL);
}

anotherNode = malloc(sizeof(listint_t));
if (anotherNode == NULL)
{
return (NULL);
}

anotherNode->n = n;
anotherNode->next = *head;

*head = anotherNode;
return (anotherNode);
}
