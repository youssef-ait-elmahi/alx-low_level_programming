#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the command-line arguments
 * Return: 0
 */

int main(int  argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
