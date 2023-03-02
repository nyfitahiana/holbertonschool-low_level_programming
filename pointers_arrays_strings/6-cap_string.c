#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @z: The string to be capitalized
 * Return: z
 */
char *cap_string(char *z)
{
	int i, j;
	int cap = 1;
	char separators[] = " \n\t,;.!?\"(){}";

	for (i = 0; z[i] != '\0'; i++)
	{
		if (z[i] >= 'a' && z[i] <= 'z' && cap)
		{
		z[i] = z[i] - 32;
		}

		cap = 0;

		for (j = 0; j < 12; j++)
		{
		if (z[i] == separators[j])
		{
			cap = 1;
			break;
		}
		}
	}
	return (z);
}
