#include "main.h"

/**
 *reverse_array - function to reverse an array
 *
 *@a: array
 *@n: array size
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
