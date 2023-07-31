#include "lists.h"

/**
* free_listint -This function frees a listint_t list.
* @head: head node
* Return: void
*/

void free_listint(listint_t *head)
{
listint_t *tmpNode;

while (head)
{
tmpNode = head;
head = head->next;
free(tmpNode);
}
}
