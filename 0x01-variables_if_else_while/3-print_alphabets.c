#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i = 'a';
	char x = 'A';

	while (i <= 'z')
{
		putchar(i);
		i++;
}
	while (x <= 'Z')
{
		putchar(x);
		x++;
}
	putchar('\n');
	return (0);
}
