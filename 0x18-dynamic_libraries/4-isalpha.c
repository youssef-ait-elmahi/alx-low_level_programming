#include "main.h"
/**
 * _isalpha - checks for lowercase character
 * @c: parameter
 * Return: 1 if the 'c' character is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
