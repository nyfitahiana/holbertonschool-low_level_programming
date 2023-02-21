#ifndef ALPHABET_H
#define ALPHABET_H

int _putchar(char c);
void print_alphabet(void);
#endif /* ALPHABET_H */
#include "alphabet.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
