#include "main.h"

/**
* *create_array - creates an array of chars,
*					and initializes it with a specific char.
* @size: size of the array
* @c: char to initialize
* Return: pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
    char *n = (char *)malloc(size * sizeof(char));
    unsigned int i;

    if (size == 0 || n == 0)
        return (NULL);

    for (i = 0; i < size; i++)
        n[i] = c;

    return (n);
}
