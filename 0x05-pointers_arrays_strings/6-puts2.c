#include "main.h"

/**
 *puts2 -function that prints every other character of a string
 *@str : string 
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n')
}
