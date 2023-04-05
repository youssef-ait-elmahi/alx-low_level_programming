#include "main.h"
/**
 * _pow_recursion - function that returns the
 *						value of x raised to the power of y
 * @y: the value
 * @x:the power
 * Return: value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (x < 0)
	{
		return (-1);
	}
	if (x < 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
