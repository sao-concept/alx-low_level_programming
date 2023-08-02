#include "lists.h"

/**
* find_listint_loop -This function finds the loop in a linked list.
* @head: search linked list
*
* Return: address of start node, otherwise NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *sNode = head;
listint_t *fNode = head;

if (!head)
return (NULL);

while (sNode && fNode && fNode->next)
{
fNode = fNode->next->next;
sNode = sNode->next;
if (fNode == sNode)
{
sNode = head;
while (sNode != fNode)
{
sNode = sNode->next;
fNode = fNode->next;
}
return (fNode);
}
}

return (NULL);
}
