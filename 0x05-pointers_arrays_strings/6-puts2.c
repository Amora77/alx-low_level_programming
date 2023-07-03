#include "main.h"

/**
 * puts2 - prints even chars of a string
 *
 * @str: string
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
