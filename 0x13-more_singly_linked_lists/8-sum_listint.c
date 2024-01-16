#include "lists.h"

/**
* sum_listint -This function returns the sum of all
* the data (n) of a listint_t linked list.
* @head: pointer to head node of a listint_t list
*
* Return: sum of all the data
*/
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum = sum + head->n;
head = head->next;
}

return (sum);
}
