#include "main.h"
/**
 * _print_recursion - function that prints a string, followed by a new line.
 * @s : string
 * Return: string
*/
void _print_recursion(char *s)
{
	if (*s  == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
