#include "lists.h"

/**
* reverse_listint -This function reverses a listint_t linked list.
* @head: a double pointer to the starting node of the
* listint_t linked list
*
* Return: pointer to first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;

if (!head || !*head)
return (NULL);

prev = NULL;

while ((*head)->next)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

(*head)->next = prev;

return (*head);
}
