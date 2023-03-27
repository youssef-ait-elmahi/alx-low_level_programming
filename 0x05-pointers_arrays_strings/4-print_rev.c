#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int index, tmp, lenght;

	index = 0;

	while (s[index])
	{
		index++;
	}
	lenght = index - 1;
	for (tmp = lenght; tmp >= 0; tmp--)
	{
		_putchar(s[tmp]);
	}
	_putchar('\n');
}
