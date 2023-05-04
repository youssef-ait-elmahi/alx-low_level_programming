/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	while (i <= n / 2)
		i <<= 1;

	while (i > 0)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
	_putchar('\n');
}
