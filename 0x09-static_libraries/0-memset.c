#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: the buffer in the memory
 * @b: the character to fill the n bytes of memory
 * @n: the len of memory to be filled using _memset
 * Return: (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
