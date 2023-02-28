#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array
 * @a: the input array
 * @n: the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	temp = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[temp];
		a[i] = end;
		a[temp] = start;
		temp--;
	}
}
