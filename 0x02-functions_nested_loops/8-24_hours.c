#include "main.h"
/**
 * jack_bauer - prints the last digit of a number
 *
 * Return: (0)
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			_putchar (hour / 10 + 48);
			_putchar (hour % 10 + 48);
			_putchar (':');
			_putchar (min / 10 + 48);
			_putchar (min % 10 + 48);
		min++;
		_putchar ('\n');
		}
		min = 0;
	hour++;
	}
}
