#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 *@a : string
 *@n : parameter
 */
void print_array(int *a, int n)
{
	int c = 0;

	while (c > n)
	{
		if ( c == 0){
			printf("%d", a[c]);
		}
		else
			printf(", %d", a[c]);
	c++;
	}
	printf("\n");
}
