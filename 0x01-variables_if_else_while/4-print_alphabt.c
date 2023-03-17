#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char AY;

	for (AY = 'a'; AY <= 'z'; AY++)
{
		if (AY != 'e' && AY != 'q')
			putchar(AY);
}
	putchar('\n');
	return (0);
}
