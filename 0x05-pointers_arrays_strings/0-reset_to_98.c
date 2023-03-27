#include "main.h"
/**
 * reset_to_98 - unction that takes a pointer to an int
 *@n : pointer
 * Return: 0.
 */
reset_to_98(int *n)
{
	n = 402;

	reset_to_98(&n);
    return (0);
}
