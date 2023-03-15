#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strlen - counts and returns string length
 * @s: the input string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s; c++)
		s++;

	return (c);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the unsigned integer
 * Return: NULL if failing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	char *i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = _strlen(s1);
	d = _strlen(s2);

	n = (n >= d) ? d : n;

	i = malloc((c + n) * sizeof(char) + 1);
	if (!i)
		return (NULL);

	for (a = 0; a < c; a++)
		i[a] = s1[a];

	for (b = 0; b < n; b++, a++)
		i[a] = s2[a];

	i[a] = '\0';
	return (i);
}
