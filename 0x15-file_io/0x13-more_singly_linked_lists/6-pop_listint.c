#include "lists.h"

/**
 * pop_listint - deletes the head of a node of a
 * listint_t linked list
 *
 * @head: Pointer to a list
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (num);
}
