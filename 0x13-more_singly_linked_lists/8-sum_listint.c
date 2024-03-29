#include "lists.h"

/**
 * sum_listint - Computes the sum of all data in a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all data in the list. If the list is empty, returns 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
