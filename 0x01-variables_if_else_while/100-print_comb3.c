#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
    int num1, num2, num3;

    for (num1 = 48; num1 <= 55; num1++)
    {
        for (num2 = num1 + 1; num2 <= 56; num2++)
        {
            for (num3 = num2 + 1; num3 <= 57; num3++)
            {
                if (num1 < num2)
                {
                    putchar(num1);
                    putchar(num2);
                    putchar(num3);
                    if (num1 != 55)
                    {
                        putchar(44);
                        putchar(32);
                    }
                }
            }
        }
    }
    putchar('\n');

    return (0);
}
