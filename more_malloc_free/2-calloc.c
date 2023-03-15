#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: the elements
 * @size: the size
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	b = nmemb * size;
	p = malloc(b);

	if (p == NULL)
		return (NULL);
	while (a < b)
	{
		p[a] = 0;
		a++;
	}
	return (p);
}
