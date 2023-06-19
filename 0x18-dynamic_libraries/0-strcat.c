#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
