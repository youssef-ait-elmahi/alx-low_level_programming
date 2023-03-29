#include "main.h"

/**
 *_strncat - function that concatenates two strings.
 * @dest: input parameter string
 * @src: input parameter string
 * @n: parameter
 * Return: dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
