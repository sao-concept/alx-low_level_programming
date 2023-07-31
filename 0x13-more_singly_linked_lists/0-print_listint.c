#include "lists.h"
#include <stdio.h>

/**
* print_listint -This function prints all the elements of a listint_t list.
* @h: the head node (pointer)
* Return: the number of nodes (int/size_t)
*/

size_t print_listint(const listint_t *h)
{
const listint_t *tmp;
size_t idx;

tmp = h;
for (idx = 0; tmp; idx++)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
return (idx);
}
