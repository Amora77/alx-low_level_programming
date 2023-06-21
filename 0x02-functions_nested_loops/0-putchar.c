#include"main.h"
/**
 * main - entry point
 * Description: print string by putchar
 * Return: 0 or 1
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}

	return (0);
}
