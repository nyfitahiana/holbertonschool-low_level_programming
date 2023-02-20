#include <stdio.h>
/** this function prints the alphabet in lowercase */
/*
 * main - Entry point
 * * 
 * Return: Always 0 (Success)
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
