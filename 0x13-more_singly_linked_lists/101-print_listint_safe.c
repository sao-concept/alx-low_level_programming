#include "lists.h"

/**
* free_listp -This function frees linked list
* @head: list head.
*
* Return: void.
*/
void free_listp(listp_t **head)
{
listp_t *tmp;
listp_t *current;

if (head != NULL)
{
current = *head;
while ((tmp = current) != NULL)
{
current = current->next;
free(tmp);
}
*head = NULL;
}
}

/**
* print_listint_safe -This function that prints a listint_t linked list.
* @head: list head.
*
* Return: number of nodes in list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t numNodes = 0;
listp_t *headPtr, *new, *add;

headPtr = NULL;
while (head != NULL)
{
new = malloc(sizeof(listp_t));

if (new == NULL)
exit(98);

new->p = (void *)head;
new->next = headPtr;
headPtr = new;

add = headPtr;

while (add->next != NULL)
{
add = add->next;
if (head == add->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&headPtr);
return (numNodes);
}
}

printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
numNodes++;
}

free_listp(&headPtr);
return (numNodes);
}
