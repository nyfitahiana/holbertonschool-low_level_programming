#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 ** main - prints all single digit numbers of base 10
 *
 ** Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
