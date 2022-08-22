#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: pointer to first element
 * @n: to be inserted in new element
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temporary = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temporary->next)
		temporary = temporary->next;

	temporary->next = new;

	return (new);
}
