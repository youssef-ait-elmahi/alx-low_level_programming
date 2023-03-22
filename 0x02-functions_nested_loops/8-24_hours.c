#include "main.h"
/**
 * jack_bauer - prints the last digit of a number
 *
 * Return: (0)
 */
void jack_bauer(void);
{
	int hour = 0;
	int min = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			putchar (hour / 10 + 48);
			putchar (hour % 10 + 48);
			putchar (':')
			putchar (min / 10 + 48);
			putchar (min % 10 + 48);
		min++;
		}
		min = 0;
	hour++;
	}
}
