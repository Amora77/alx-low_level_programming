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
	char letter;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
