#include "main.h"
/**
 * clear_bit -  function that sets the value of
 *								a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to clear, starting from 0 (0 is the rightmost bit)
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
