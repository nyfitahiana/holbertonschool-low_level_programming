#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Function that searches for any of a set of bytes
 * @s: the first string
 * @accept: the second string
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *c = NULL;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
		if (s[a] == accept[b])
		{
			c = &s[a];
			return (c);
		}
		}
	}
	return (c);
}
