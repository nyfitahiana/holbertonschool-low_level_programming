#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node of a dlistint_t linked list
 * @head: the head of the node.
 * @index: index of the node
 * Return: NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i;

	current_node = head;

	for (i = 0; current_node != NULL && i < index; i++)
	{
		current_node = current_node->next;
	}
	if (i == index && current_node != NULL)
	{
		return (current_node);
	}
	else
	{
	return (NULL);
	}
}
