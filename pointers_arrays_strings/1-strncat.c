#include "main.h"
#include <stdio.h>
/**
 * *_strncat - Concatenates two strings
 * @dest: the destination
 * @src: the source
 * @n: number of bytes to print
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')

	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
