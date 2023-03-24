#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *
 * Return: Always 0.
 */
int main(void)
{
	long p = 612852475143, d;

	while (d < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p /= 2;
			continue;
		}

		for (d = 3; d < (p / 2); d = d + 2)
		{
			if ((p % d) == 0)
				p /= d;
		}
	}

	printf("%ld\n", p);

	return (0);
}
