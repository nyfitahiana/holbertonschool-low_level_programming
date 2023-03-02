#include <stdio.h>
#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: the substring
 * @needle: the string
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;
	char *c = NULL;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
		if (haystack[a + b] != needle[b])
			break;
		}
		if (needle[b] == '\0')
		{
			c = &haystack[a];
			return (c);
		}
	}
	return (NULL);
}
