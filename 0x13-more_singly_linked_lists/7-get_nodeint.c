#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 *
 * Return: pointer to the indexed node
 * NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!(head))
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (!(head))
		return (NULL);
	else
		return (NULL);
}
