#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer value a
 * @b: pointer value b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
