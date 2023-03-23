#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n : parameter
 */
void print_diagonal(int n)
{
	int l;
	int i = 0;

	while (i < n)
	{
		l = i;
		while (l--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
