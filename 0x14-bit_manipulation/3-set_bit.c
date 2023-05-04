#include "main.h"
/**
 * set_bit -function that sets the value of a bit to
 *									1 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to set, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);
}
