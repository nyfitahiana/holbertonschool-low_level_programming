#include "main.h"
/**
 * print-numbers - functions that prints the number
 * Return: 0
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
