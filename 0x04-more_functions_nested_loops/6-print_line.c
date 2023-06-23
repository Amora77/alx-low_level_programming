#include"main.h"

/**
 * print_line - check for uppercase
 * Description: print 1 to 9
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
