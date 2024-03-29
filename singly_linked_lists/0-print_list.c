#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t
 * @h: the pointer
 * Return: number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
