#include"main.h"

/**
 * _isalpha - function to check lower alphabetics
 * @c: input of function
 * Return: 1 if alphapetic or 0 if not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if(c >= 65 && c <= 90)
		return (1);
	return (0);
}

