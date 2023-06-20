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

	for (digit = 0; digit <= 10 ; digit++)
	{
		printf("%d" , digit);
	}

	putchar('\n');
	return (0);
}
