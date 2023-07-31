#include "lists.h"

/**
* insert_nodeint_at_index -This function that inserts
* a new node at a given position.
* @head: pointer to the starting node of listint_t list
* @idx: position where new node is to be inserted
* @n: data to be stored in new node
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *anotherNode, *tmp = *head;
unsigned int index = 0;

anotherNode = malloc(sizeof(listint_t));
if (!anotherNode)
return (NULL);

anotherNode->n = n;

if (!idx)
{
anotherNode->next = tmp;
*head = anotherNode;
return (anotherNode);
}

while (index++ < (idx - 1))
{
if (!tmp || !(tmp->next))
return (NULL);

tmp = tmp->next;
}

anotherNode->next = tmp->next;
tmp->next = anotherNode;

return (anotherNode);
}
