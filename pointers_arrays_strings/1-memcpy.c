#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to beginning of the memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *ret = dest;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (ret);
}
