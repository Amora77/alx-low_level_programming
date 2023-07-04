#include "main.h"

/**
 *_strcat - concatination function.
 *
 *@dest:  dest
 *@src: source
 *
 * Return: This return to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i  < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
