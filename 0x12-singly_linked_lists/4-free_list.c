#include "lists.h"

/**
* free_list -This function frees a linked list.
* @head: Pointer to the head of the linked list.
* Return: No return.
*/

void free_list(list_t *head)
{
list_t *current_node;

while ((current_node = head) != NULL)
{
head = head->next;
free(current_node->str);
free(current_node);
}
}

