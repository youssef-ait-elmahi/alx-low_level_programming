#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: 0
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n % 10;
	if (a > 5)
{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
}
	else if (a < 6 && a != 0)
{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
	else
		printf("Last digit of %d is %d and is 0\n", n, a);
	return (0);
}
