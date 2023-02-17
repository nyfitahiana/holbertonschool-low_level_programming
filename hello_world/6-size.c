#include <stdio.h>
/**
 * main - Prints the size of various types on this computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: 1 byte(s)\n", sizeof(char));
printf("Size of an int: 4 byte(s)\n", sizeof(int));
printf("Size of a long long int: 8 byte(s)\n", sizeof(long long));
printf("Size of a float: 4 byte(s),\n", sizeof(float));
return (0);
}
