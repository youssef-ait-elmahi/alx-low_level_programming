#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
int line;

	for (line = 0; line <= 9; line++)
	{
		int num;

		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar (num / 10 + 48);
			_putchar (num % 10 + 48);
		}
		_putchar('\n');
	}
}
