#include "lists.h"

/**
* print_listint_safe -This function that prints a listint_t linked list.
* @head: list head
*
* Return: number of nodes in list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t numNodes = 0;
long int diff;

while (head)
{
diff = head - head->next;
numNodes++;
printf("[%p] %d\n", (void *)head, head->n);
if (diff > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}

return (numNodes);
}
