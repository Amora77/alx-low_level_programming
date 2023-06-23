#include<unistd.h>
#include"main.h"
#include <stdio.h>
/**
 * _putchar - print char c to stdout
 *
 * @c: character
 *
 * Description: pnt one char
 *
 * Return: on success 1
 *		on fail -1
 */

int _putchar(char c)
{
	return (write(1, &C, 1));
}
