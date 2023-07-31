#include "lists.h"

/**
* free_listint2 -This function that frees a listint_t list.
* @head: Head of node.
* Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *tmpNode;

tmpNode = *head;
if (tmpNode == NULL)
{
return;
}
while (tmpNode != NULL)
{
listint_t *fre;

fre = tmpNode;
tmpNode = tmpNode->next;
free(fre);
}
*head = NULL;
}
