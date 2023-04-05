#include "main.h"

int second_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the
 *							natural square root of a number
 * @n: number to calculate
 *
 * Return: final result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * scend_sqrt_recursion - helping to find the natural
 *									square root of a number
 * @n: number to calculate
 * @i: repetition
 * Return: final result
 */
int scend_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (scend_sqrt_recursion(n, i + 1));
}
