#include"main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description: print prime number
 * Return: 0 ore one
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%li\n", num);
	return (0);
}
