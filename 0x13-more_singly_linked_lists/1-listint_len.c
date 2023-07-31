#include "lists.h"

/**
* listint_len -This function returns the number of elements
* in a linked listint_t list.
* @h: headnode
*
* Return: number of elements.
*/

size_t listint_len(const listint_t *h)
{
const listint_t *tmp;
size_t idx;

tmp = h;
for (idx = 0; tmp; idx++)
{
tmp = tmp->next;
}
return (idx);
}
