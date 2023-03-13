#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: the size of the array
 * @c: the array
 * Return: NULL if size 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}
	return (a);
}
