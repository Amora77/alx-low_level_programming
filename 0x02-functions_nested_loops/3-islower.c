#include<main.h>

/**
 * _islower - function to check lower case
 * @c: input of function
 * Return: 1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
