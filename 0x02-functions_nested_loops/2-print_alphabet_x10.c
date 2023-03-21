#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always (0) success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		while (j <= 'z')
		{
		_putchar (j);
		j++;
		}
	i++;
	_putchar ('\n');
	}
}
