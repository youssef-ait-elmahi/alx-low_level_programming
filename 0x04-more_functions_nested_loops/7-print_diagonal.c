#include "main.h"

/**
 * print_line - function that draws a diagonal line on the terminal.
 * @n : parameter
 */
void print_line(int n)
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
}
