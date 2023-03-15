#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int a, b;
	int *p;

	if (min > max)
	{
	return (NULL);
	}
	a = max - min + 1;

	p = malloc(a * sizeof(int));
	if (p == NULL)
	{
	return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		p[b] = min + b;
	}
	return (p);
}
