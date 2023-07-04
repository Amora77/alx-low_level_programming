#include "main.h"

/**
 *_strcat - concatination function.
 *
 *@dest:  dest
 *@src: source
 *@n: count of letters
 * Return: This return to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j <= n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
