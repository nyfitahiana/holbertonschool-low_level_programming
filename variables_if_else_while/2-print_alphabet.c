#include <stdio.h>
/*
 * main - This function prints the alphabet in lowercase
 *
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
