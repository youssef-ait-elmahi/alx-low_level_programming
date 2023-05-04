#include "main.h"
/**
 * print_binary - function that converts a binary
 *						number to an unsigned int
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
    int len = sizeof(n) * 8;
    int i;

    for (i = len - 1; i >= 0; i--)
    {
        if ((n >> i) & 1)
            _putchar('1');
        else
            _putchar('0');
    }
}
