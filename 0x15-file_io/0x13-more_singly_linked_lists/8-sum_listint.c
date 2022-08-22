#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n)
 * of a listint_t linked list
 *
 * @head: pointed to a linked list
 *
 * Return: sum of all the data of a linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}
	return (sum);
}
