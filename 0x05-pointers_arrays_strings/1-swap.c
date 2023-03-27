#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a : pointer
 * @b : pointer
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
