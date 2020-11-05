#include "lists.h"

/**
 * get_nodeint_at_index - prints elements of a list_t list
 * @head: head node
 * @index: index of the node, starting at 0
 * Return: the current node, else, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	tmp = head;
	while (count < index && tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	if (count != index)
		return (NULL);
	return (tmp);
}
