#include "lists.h"

/**
 * pop_listint - Delete the head node of a linked list
 * @head: head of the linked list
 *
 * Description: function to delete the head node of a linked list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	val = tmp->n;
	free(tmp);
	return (value);
}
