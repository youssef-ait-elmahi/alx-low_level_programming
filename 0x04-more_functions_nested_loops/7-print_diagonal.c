#include "main.h"

/**
 * print_line - function that draws a diagonal line on the terminal.
 * @n : parameter
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
	for (l = 0; l < n; l++)
	{
		for (l = 0; l < n; l++)
			_putchar(' ');
	}
	_putchar('\\');
	}
	_putchar('\n')
}
