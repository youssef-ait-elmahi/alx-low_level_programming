#include "main.h"
/**
 *  _strchr- fills memory with a constant byte.
 * @s: the buffer in the memory
 * @c: the character to fill the n bytes of memory
 * Return: (s).
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (c == '\0')
		return (s);
	return ('\0');
}
