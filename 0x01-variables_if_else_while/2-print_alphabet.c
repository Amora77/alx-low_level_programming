#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print Alphapit in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

    	putchar('\n');
	return (0);
}
