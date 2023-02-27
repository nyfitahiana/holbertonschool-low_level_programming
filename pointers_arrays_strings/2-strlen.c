#include "main.h"
/**
 * strlen - function that returns the length of a string
 * @s: string to evalute
 *
 * Return: a
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}	
