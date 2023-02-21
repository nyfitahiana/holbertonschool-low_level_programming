#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
}
/**
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

