#include "lists.h"

/**
* get_nodeint_at_index -This function returns
* the nth node of a listint_t linked list.
* @head: head node
* @index: returned node index.
* Return: node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int idx;

if (head == NULL)
{
return (NULL);
}

for (idx = 0; idx < index; idx++)
{
head = head->next;
if (head == NULL)
{
return (NULL);
}
}
return (head);
}
