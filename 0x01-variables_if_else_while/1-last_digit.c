#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int a = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (a > 5)
{
		printf("Last digit of %d is %d and is greater than 5", n, a);
}
	else if (a < 6 && a != 0)
{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
}
	else
{
		printf("Last digit of %d is %d and is 0", n, a);
}
	return (0);
}
