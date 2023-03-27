#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a, b, lenght;
	char tmp;

	a = 0;
	b = 0;

	while (s[a])
	{
		a++;
	}
	lenght = a - 1;
	while (b < a / 2)
	{
		tmp = s[b];
		s[b] = s[lenght];
		s[lenght = tmp];
		lenght--;
		b++;
	}
}
