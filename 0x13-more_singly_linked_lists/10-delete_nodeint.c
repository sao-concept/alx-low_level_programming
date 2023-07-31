#include "lists.h"

/**
* delete_nodeint_at_index -This function deletes the node
* at index index of a listint_t linked list.
* @head: double pointer to starting node of listint_t list
* @index: position of element of the listint_t list
* set to be deleted.
*
* Return: 1 on Success, otherwise -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int n = 0;
listint_t *tmp, *next;

if (!*head)
return (-1);

tmp = *head;

if (!index)
{
*head = tmp->next;
free(tmp);
return (1);
}

while (tmp && (n++ < (index - 1)))
tmp = tmp->next;

if (!tmp || !tmp->next)
return (-1);

next = tmp->next->next;
free(tmp->next);
tmp->next = next;

return (1);
}
