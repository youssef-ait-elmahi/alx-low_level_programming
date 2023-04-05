#include "main.h"
/**
 * _second_sqrt_recursion - helpes function to calculate the square root recursively
 * @n: the number to calculate
 * @i: help to calculate
 *
 * Return: final result
 */
int _second_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_second_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(n, 0));
}
