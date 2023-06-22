#include"main.h"

/**
 * print_last_digit - function to get absolute value
 * @n: input of function
 * Return: 1 if alphapetic or 0 if not
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
