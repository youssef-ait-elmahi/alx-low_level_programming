#include "variadic_functions.h"
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: the number of parameters
 * @...: the parameters to sum up
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		while (i < n)
		{
			sum = sum + va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
