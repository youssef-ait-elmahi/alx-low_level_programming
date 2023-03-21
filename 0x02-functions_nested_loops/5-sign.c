#include "main.h"
/**
 * print_sign- checks for lowercase character
 * @n: parameter
 * Return: 1 if the 'c' character is lowercase, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
{
		putchar ('+');
		return (1);
}
	else if (n > 0)
{
		_putchar ('-');
		return (-1);
}
	else
{
		_putchar ('0');
		return (0);
}
}
