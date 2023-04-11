#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 *				to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: the 2D array created.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width == 0 && height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (!array[i])
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
