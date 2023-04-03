#include "main.h"
/**
 *  _strchr- fills memory with a constant byte.
 * @s: the buffer in the memory
 * @c: the character to fill the n bytes of memory
 * Return: (s).
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		i++;
	}
	else
		return ('\0');
}
