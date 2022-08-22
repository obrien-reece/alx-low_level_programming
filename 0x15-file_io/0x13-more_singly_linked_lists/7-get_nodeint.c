#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list
 *
 * @head: pointer to a list
 * @index: index of the node, starting at 0
 *
 * Return: nth node of a linked list
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temporary = head;

	while (temporary && i < index)
	{
		temporary = temporary->next;
		i++;
	}
	return (temporary ? temporary : NULL);
}
