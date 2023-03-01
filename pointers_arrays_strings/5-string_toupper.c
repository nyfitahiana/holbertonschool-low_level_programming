#include "main.h"
/**
 * string_toupper - Changes all lowercase to uppercase
 * @i: the string to change
 * Return: i
 */
char *string_toupper(char *i)
{
	char *ptr = i;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - 32;
	}
	ptr++;
	}
	return (i);
}
