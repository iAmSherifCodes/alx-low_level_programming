#include "main.h"

/**
 * _memset - Fills the first n bytes with constant byte b
 *
 * @s: copy to
 * @b: constant byte
 * @n: n byte
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	counter = 0;

	for ( ; counter < n ; counter++)
	{
		*(s + counter) = b;
	}

	return (s);
}
