#include "main.h"
/**
 * _abs - checks for lowercase character
 * @n: parameter
 * Return: num*-1 or num
 */
int _abs(int n)
{
	int num = n;

	if (n < 0)
		return (num * -1);
	else
		return (num);
}
