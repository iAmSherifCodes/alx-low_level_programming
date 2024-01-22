#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 *
 * @size: size of the array
 * @c: initialize array with character
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(sizeof(char) * size);

	if (size == 0 && a == NULL)
	{
		fprintf(stderr, "failed to allocate memory\n");
		return (NULL);
	}

	for ( ; i < size; i++)
	{
		*(a + i) = c;
	}

	return (a);
}
