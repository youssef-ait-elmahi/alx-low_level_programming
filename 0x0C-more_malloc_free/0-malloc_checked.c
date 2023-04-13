#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using
 * @b: usigned variable that we worked on
 * Return: memory
*/
void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (!memory)
	{
		exit(98);
	}
	return (memory);
}
