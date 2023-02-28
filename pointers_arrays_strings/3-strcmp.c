#include "main.h"
/**
 * _strcmp - write a function that compares two strings
 * @s1: the first stringto be compared
 * @s2: the second string to be compared
 *
 * Return: If the strings are equals return "0", if not return other number
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;

	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
