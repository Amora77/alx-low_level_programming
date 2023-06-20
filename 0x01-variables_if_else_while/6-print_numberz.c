#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print numbers
 *
 * Return: 0 (success)
 */

int main(void)
{

	int digit;

	for (digit = 0; digit <= 9 ; digit++)
	{
		putchar((digit % 10) + '0');
	}

	putchar('\n');
	return (0);
}
