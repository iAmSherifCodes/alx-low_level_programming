#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @dest: copy to
 * @src: copy from
 * @n: number of byte
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;

	for ( ; counter < n ; counter++)
	{
		*(dest + counter) = *(src + counter);
	}

	return (dest);
}
