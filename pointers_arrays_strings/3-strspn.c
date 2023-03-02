#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: first value char
 * @accept: second value char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int c = 0;

	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
		if (s[a] == accept[b])
		{
			c++;
			break;
		}
		}
		if (accept[b] == 0)
			break;
	}
	return (c);
}
