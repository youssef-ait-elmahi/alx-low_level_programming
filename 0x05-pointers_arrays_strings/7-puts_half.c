#include "main.h"

/**
 * puts_half - print a half a string
 * @str: the string that we going to cut
 *
 */

void    puts_half(char *str)
{
	int a, b, lenght;

	a = 0;
	b = 0;

	while (s[a])
	{
		a++;
	}
	if (a % 2 == 0)
	{
		a =  a / 2;
		while (b > tmp)
			_putchar(a);
		a++;
	}
	else
	{
		a = (a + 1) / 2;
		while (a != '\n')
		_putchar(a);
			a++;
	}
	_putchar('\n');
}
