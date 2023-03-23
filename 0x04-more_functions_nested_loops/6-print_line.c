#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n : parameter
 */
void print_diagonal(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
