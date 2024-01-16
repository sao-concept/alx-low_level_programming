#include "lists.h"

/**
* pop_listint -This function deletes the head node of a
* listint_t linked list, and returns the head node’s data (n).
* @head: Head of node.
* Return: head node's data
*/

int pop_listint(listint_t **head)
{
listint_t *tmpNode;
int dataNode;

if (*head == NULL)
{
return (0);
}

tmpNode = *head;
*head = tmpNode->next;
dataNode = tmpNode->n;

free(tmpNode);
return (dataNode);
}
