#include <stdio.h>
/**
 * 
 * main - Entry point
 * 
 * Retur: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
