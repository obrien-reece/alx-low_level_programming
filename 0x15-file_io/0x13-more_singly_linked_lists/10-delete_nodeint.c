#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * of a listint_t linked list
 *
 * @head: pointer to a linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy, *copy2 = *head;
	unsigned int i;

	if (copy2 == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy2);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (copy2->next == NULL)
		{
			return (-1);
		}
		copy2 = copy2->next;
	}
	copy = copy2->next;
	copy2->next = copy->next;
	free(copy);
	return (1);
}
